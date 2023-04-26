#include<iostream>
using namespace std;

//doubly linked list

//Node:   [address of prev node, data, address of next node]:::    [NULL,5,710] -> <- [810, 6, NULL] 710 address of node 2 and 810 = address of node 1

class Node{

    public:
    int data;
    Node *next;
    Node *prev;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    ~Node(){
        int val = this-> data;
         //this condition for nodes that are not tail
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory removed of: "<<val;
    }
};


void print(Node*&head)
{
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

}

void insertAthead(Node* &tail,Node* &head,int d){

    //if head null
    if(head==NULL){
        Node* node1= new Node(d);
        head=node1;
        tail=node1;
    }
    else{

        Node *temp=new Node(d);

        temp->next=head;
        head->prev=temp;
        head=temp;

    }

}
void insertAttail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* node1= new Node(d);
        tail=node1;
        head=node1;
    }

    Node *temp=new Node(d);

    tail->next=temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtposition(Node *&head,Node *&tail, int pos,int d){


    Node* nodetoinsert=new Node(d);
    Node *temp=head;

    if(pos==1){
        insertAthead(tail,head,d);
        return;
    }

    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }

    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

    if(nodetoinsert->next==NULL){
        tail=nodetoinsert;
    }
    
}


void deletion(Node* &head,int pos){

    Node*temp=head;
    if(pos==1){
        head->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }

    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;

}




int main(){

    //if head NULL i.e no node 1
    Node* head=NULL;
    Node* tail=NULL;

    // Node *node1= new Node(10);
    // Node *head=node1;
    // Node *tail=node1;
    // print(head);

    //at head
    insertAthead(tail,head, 12);
    insertAthead(tail,head, 11);
    print(head);

    //at tail
    insertAttail(tail,head,100);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;

    //at pos
    insertAtposition(head,tail,1,200);
    print(head);
    cout<<tail->data<<endl;


    //delete
    deletion(head,3);
    cout<<endl;
    deletion(head,1);
    cout<<endl;
    

    print(head);
}