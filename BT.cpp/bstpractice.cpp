#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* right;
    Node* left;
    int val;

    Node(int value)
    {
        this->right = NULL;
        this->left = NULL;
        this->val = value;
    }
};
Node* insert_bst(Node* root,int data)
{
    if(!root) return new Node(data);

    if(root->val < data)
    {
        root->right = insert_bst(root->right,data);
    }
    else {
        root->left = insert_bst(root->left,data);
    }

    return root;
}
void inorder(Node* root)
{
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main()
{
    Node* root = NULL;
    
    cout<<"Enter data: ";
    int data;
    cin>>data;
    cout<<endl;

    while(data != -1)
    {
        root = insert_bst(root,data);
        cout<<"Enter data: ";
        cin>>data;
        cout<<endl;
    }

    inorder(root);
}