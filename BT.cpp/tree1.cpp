//leaf node: node without children
// root : top node from where tree start
// Therefore, the minimum height for a binary tree is roughly equal to log(n) roughly.
// tree: non linear data structure

// https://www.upgrad.com/blog/5-types-of-binary-tree/
// Full Binary Tree
// each node has either 2 child or 0 child 
// no. of node does not matter on right and left side just parent should not have 1 node only.

// Complete Binary Tree: all three level must be filled completely with nodes  i.e minimum of 7 node 1->2->4 and then if there exist further branch it must exist towards left i.e if not balanced then left > right

// perfect BT: all parent have strictly two nodes

//balanced BT : height of tree must be exactly equal to logn 
//  i.e differnce between left and right of each parent node must be atmost 1.                          

// degenrate BT: if each node has only 1 child








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

// using queue
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
int main(){
    node* root =NULL;
    root = build(root);
    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraverse(root);

    
}