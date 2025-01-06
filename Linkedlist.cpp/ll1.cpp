#include<iostream>
using namespace std;


//  vector is dynamic array as size can be changed  At run time but array[] isn't

// so we use linked list which is dynamic hence no memory waste, LL can be grown and shrink at run time

// node: it has two parts data and last block as address of next node

// linked list: collection of node, easy insertion and deletion

// at end there exist null
//  [5,710]--> [8,810]-->[3,Null]  
//(address of 8 =710) (address of 3 =810)

//arr has continous address but in LL not continous it points random address hence better data structure

//types
// 1. singly LL above ex
// 2. Doubly LL
// 3. Circular LL
// 4. Circular Doubly LL

// Node
// data + pointer
// [, pointer of node type]-->[,pointer of node type]-->[]

class Node {

    public:

    int data;
    Node *next;   //pointer of node type

    //constructor

    Node(int d){
        this -> data=d;
        this -> next = NULL;
    }

    //destructor

    ~Node(){
        int value = this->data;
        //as on delete this->data will also be deleted

        //this condition for nodes that are not tail
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory Freed of: "<<value<<endl;
    }
    //call by delete
};

//note    if you change class name then all Node words will change there is nothing as Node in-built;

int main(){
    Node *node1 = new Node(10);  // taken from heap so new 
    cout<<node1 -> data<<endl;
    cout<< node1 -> next<<endl;
    //currently garbage value







}



//--*-**-*----------------------------/--------------+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++-*=====
// singly LL
//  [5,710]--> [8,810]-->[5,Null]  
//(address of 8 =710) (address of 5 =810)  both ar node type pointers

//insertion

// initially head node = NULL   ( Node *Head = NULL)
//then define node:    Node1 *node1 = new Node1(10) : [10,NULL] (node1)
//make head point at 10:   Head = node1

// now let another node : temp: [12,NULL] to make them LL

// temp->next = node1 (or Head)
// update head : Head = temp

//  [5,710]--> [8,810]-->[3,Null]   here head is pointing 5

void insertAthead(Node* &head, int d){
    // & so there is no copy

    //new node

    Node* temp = new Node(d);

    temp->next=head;
    head=temp;
    
}

//printing LL

// currently Head point 5 in  [5,710]--> [8,810]-->[3,Null] 
//now make temporary head i.e temp pointer which also points 5
// now print temp value then forward so it points 8 then print it 
// do this until temp=NULL

void print(Node* &head){

    Node* temp=head;
    
    while( temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(3);

    Node* head=node1;

    insertAthead(head, 8);
    insertAthead(head, 5);

    print(head);
    //[5,710]--> [8,810]-->[3,Null] 

}

//reversing the order  : 3,8,5

// tail: pointer of node type, points last node (Not at Null)

//insert at tail: new node added at ending node

// process node1=  [8,NULL] tail pointing 8 another node temp=[5,NULL] 
// now we know tail = node1 so make node1->next = temp
// now update tail: tail= temp ;
// so :  [8 , address of 5]->[5,NULL] 

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail->next =  temp;
    tail = temp;

}

// int main(){

//     Node* node1 = new Node(3);

//     Node* head=node1;
//     Node *tail =node1;

//     insertAtTail(tail, 8);
//     insertAtTail(tail, 5);

//     print(head);
//     // 3 -> 8-> 5   reverse 

// }


//insert in middle
// []-> []->[] insert at 3rd pos => []->[]->[(new)]->[]

void insertAtposition(Node* &head ,Node* &tail, int pos, int d){

    Node* nodetoinsert = new Node(d);
    if(pos==1){
        insertAthead(head,d);
        return;
    }
    Node *temp = head;

    for(int i=1 ;i<pos-1;i++){
        temp=temp->next;
    }

    nodetoinsert->next=temp->next;
    temp->next = nodetoinsert;

    if(nodetoinsert->next==NULL){
        tail=nodetoinsert;    
    }
}

// int main(){

//     Node* node1 = new Node(3);

//     Node* head=node1;
//     Node *tail =node1;

//     insertAtTail(tail, 8);
//     insertAtTail(tail, 5);
//     insertAtTail(tail, 6);
//     insertAtTail(tail, 7);

//     insertAtposition(head,tail,1,22);
//     insertAtposition(head,tail,3,25);
//     insertAtposition(head,tail,8,26);

//     cout<<tail->data<<endl;

//     print(head);

//     // 3 -> 8-> 5   reverse 

// }

//delteion


//here you did the nodetoremove-> next = null :::: dont do it make destructor in class and delete it
void deleteAtposition(Node* &head,Node* &tail,int pos){

    Node* temp = head;

    //del at head
    if (pos==1){
        head=temp->next;
        temp->next=NULL;
        //free memory
        delete temp;
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }

    Node *toremove= temp->next;

    temp->next= toremove->next;
    toremove->next=NULL;
    //free memory
    delete toremove;
    if(temp->next==NULL){
        tail=temp;
    }


}
int main(){

    Node* node1 = new Node(3);

    Node* head=node1;
    Node *tail =node1;

    insertAtTail(tail, 8);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);
    insertAtTail(tail, 7);

    insertAtposition(head,tail,1,22);
    insertAtposition(head,tail,3,25);
    insertAtposition(head,tail,8,26);

    cout<<tail->data<<endl;

    print(head);

    deleteAtposition(head,tail,8);
    deleteAtposition(head,tail,3);
    deleteAtposition(head,tail,1);
    print(head);
    cout<<tail->data<<endl;

    // 3 -> 8-> 5   reverse 

}




































