#include<iostream> 
using namespace std;

class node{

    public:
    int data;
    int height;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->height=1;
        this->left=NULL;
        this->right=NULL;
    }
};
int h(node* root){
    if(root==NULL){
        return 0;
    }
    return root->height;
}
node* rrot(node* y){

    node * x=y->left;
    node * t=x->right;
    y->left=t;
    x->right=y;

    y->height=max(h(y->right),h(y->left)) +1;
    x->height=max(h(x->right),h(x->left)) +1;
    return x;

}
node* lrot(node* x){
    node * y=x->right;
    node * t=y->left;

    x->right=t;
    y->left=x;

    y->height=max(h(y->right),h(y->left)) +1;
    x->height=max(h(x->right),h(x->left)) +1;

    return y;

}
node* insert(node* root,int data){
    if(root==NULL){
        node * n=new node(data);
        return n;
    }
    else if(root->data>data){
        root->left = insert(root->left,data);
    } 
    else if(root->data<data){
        root->right = insert(root->right,data);
    }
    else{
        return root;
    }
    root->height=max(h(root->left),h(root->right)) +1;

    int bf=h(root->left) -h(root->right);
    // left left
    if(bf>1 && data<root->left->data){
        return rrot(root);
    }
    // left right
    else if(bf>1 && data>root->left->data){
        root->left= lrot(root->left);
        return rrot(root);
    }
    // right right
    else if(bf<-1 && data>root->right->data){
        return lrot(root);
    }
    // right left
    else if(bf<-1 && data<root->right->data){
        root->right=rrot(root->right);
        return lrot(root);
    }

    return root;
}
void preorder(node* &root){
    if(root==NULL){
        return;
    }
    // NLR
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root = NULL;
     
    /* Constructing tree given in
    the above figure */
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    preorder(root);

     
    return 0;
}

