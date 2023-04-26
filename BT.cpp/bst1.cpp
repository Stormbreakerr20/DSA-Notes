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
#include<queue>
void levelOrderTraverse(node* &root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp= q.front() ; //first in first out hence at top root initially
        q.pop();
        //NULL : here it means level complete
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<"  ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
node* insertinbt(node* &root , int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }
    if(root->data>data){
        root->left =insertinbt(root->left,data);
    }
    else{
        root->right= insertinbt(root->right,data);
    }
    return root;
}
void input(node* & root){
    cout<<"Enter: ";
    int data;
    cin>>data;

    while(data!=-1){
        insertinbt(root,data);
        cout<<"Enter: ";
        cin>>data;
    }
}
bool search(node* &root,int d){
    if(root==NULL){
        return false;
    }

    if(root->data==d){
        return true;
    }
    else if (root->data>d){
        return search(root->left,d);
    }
    else if(root->data<d){
        return search(root->right,d);
    }
    return false;

}
int minival(node*& root){
    node *temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
node* deletenode(node* &root, int d){
    if(root==NULL){
        return NULL;
    }
    if(root->data==d){
        //0 child;
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left
        else if(root->left!=NULL && root->right==NULL){
            node* temp= root->left;
            delete root;
            return temp;
        }
        //right
        else if(root->left==NULL && root->right!=NULL){
            node* temp= root->right;
            delete root;
            return temp;
        }
        //two child: imp : either replace root data with max from left branch of root or replace root data with min from right branch

        else if(root->left!=NULL && root->right!=NULL){
            int mini = minival(root->right);
            root->data=mini;
            root->right=deletenode(root->right,mini);
            return root;
        }
    }
    else if(root->data>d){
        root->left = deletenode(root->left,d);
        return root;
    }
    else{
        root->right = deletenode(root->right,d);
        return root;
    }
    return root;
}
int main(){
    cout<<"Enter: ";
    node* root=NULL;
    input(root);
    cout<<endl;
    levelOrderTraverse(root);

    // cout<<search(root,15);
    deletenode(root,5);
    levelOrderTraverse(root);

}