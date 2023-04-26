#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
// inorder: LNR  left jaate rho null ate hi node pe then right jaate raho
// preorder: NLR node then left the right
// postorder: LRN

// print jab N aega

void inorder(node* &root){
    if(root==NULL){
        return;
    }
    // LNR
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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
void postorder(node* &root){
    if(root==NULL){
        return;
    }
    // LRN
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* build(node* &root){

    cout<<"Enter data "<<endl;
    int data;
    cin>>data;

    root = new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter data to insert in left of "<<data<<endl;
    root->left=build(root->left);
    cout<<"Enter data to insert in right of "<<data<<endl;
    root->right=build(root->right);

    return root;
}


int main(){
    node* root =NULL;
    root = build(root);
    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    
}