// reverse https://bit.ly/3H1lKov
//m-1
// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     // Write your code here
//     LinkedListNode<int> *prev=NULL;
//     LinkedListNode<int> *curr=head;
//     LinkedListNode<int> *forward=curr;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     head=prev;
//     return head;
// }
//m-2 rec
// void rev(LinkedListNode<int> *&head,LinkedListNode<int> *prev,LinkedListNode<int> *curr){
//     if(curr==NULL){
//         head=prev;
//         return;
//     }
//     rev(head,curr,curr->next);
//     curr->next=prev;
// }

// find middle node https://bit.ly/3tRF3ga
// Node* middlel(Node* head){
//         Node* fast=head->next;
//         Node* slow = head;
//         while(fast != NULL && fast-> next != NULL) {
//             fast = fast -> next -> next;
//             slow = slow -> next;
//         }
//         return slow;
//     }

// Reverse k groups https://bit.ly/3r1rCIP

//circular ll or not https://bit.ly/3qY0KcF

//detect and remove loop
#include<iostream>
using namespace std;
#include<map>
class Node {

    public:

    int data;
    Node *next;   //pointer of node type

    //constructor

    Node(int data){
        this -> data=data;
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

//detect using map  S.C = O(n)
bool detect(Node* &head){
    map<Node*,bool> m;
    if(head==NULL){
        return false;
    }
    Node* temp=head;
    while(temp!=NULL){
        if(m[temp]==true){
            return true;
        }
        m[temp]=true;
        temp=temp->next;
    }
    return false;
}

//floyd method

//two pointer fast and slow if fast and slow meet again loop exist   S.C=O(1) 
//problem we can't find at which element looped to find it as slow == fast set slow again to head and then there next intersection will give vnode at which looped after slow = head now move fast at same speed as slow i.e 1-1 step
Node* intersect(Node*& head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast = head;
    while(slow!=NULL &&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL ){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
Node* startofloop(Node*& head){
    Node*slow =head;
    Node* fast=intersect(head);

    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head==NULL) return NULL;
    Node*start = startofloop(head);

    Node* temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;

}
// m-2
Node *removeLoop(Node *head)
{
    // Write your code here.
    Node* slow=head;
    Node*prev=NULL;
    Node*fast=head;
    Node* now=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        prev=slow;
        slow=slow->next;
        

        if(fast==slow){
            while(now!=slow){
                now=now->next;
                prev=slow;
                slow=slow->next;
            }
            prev->next=NULL;
            break;

        }
    }
    return head;

}

//  Remove Duplicates from Sorted Linked List: https://bit.ly/3rjMQC5 

//  Remove Duplicates from Un-Sorted Linked List: https://bit.ly/3uaGRRU 
// m-1 standard O(n^2) 
// m-2 merge sort O(nlogn) then sorted list duplicates
// m-3 map O(n) dont use map use unordered_map<>

// Sort 0s, 1s and 2s : https://bit.ly/3s3fAOu
// m-1 by replacement count 0,1,2 and then if 0=2 make first two node data =0 and so on  .... done on codestudio
// m-2
// without replacement
// by makng 3 node zero, one ,two then merging them Note: we need dummy node in all three initially else very problemetic

//  Merge 2 sorted Linked List : https://bit.ly/3rfFdfV
//m-1 similar to merge 2 sorted array
//m-2 pick element from list 2 and get correct position to insert that node in list 1


//  Palindrome Linked List: https://practice.geeksforgeeks.org/pr...
// Add 2 Numbers rep. by Linked List:  https://practice.geeksforgeeks.org/pr...

// - Merge Sort Linked List:  https://bit.ly/3GsXWsz

// - Clone Linked List with Random Pointers:  https://practice.geeksforgeeks.org/pr...

//  if we do m-1 i.e map then sc=o(n);
// public:
//     Node *copyList(Node *head)
//     {
//         //Write your code here
//         Node*headcopy=NULL;
//         Node*tail=NULL;
//         Node* temp= head;
//         map<Node*,Node*> m;    
//         while(temp!=NULL){          
//             Node* temp2 = new Node(temp->data);
//             m[temp]=temp2;
//             if(!tail){
//                 tail=temp2;
//                 headcopy=temp2;
//             }
//             else{
//                 tail->next=temp2;
//                 tail=temp2;
//             }
//             temp=temp->next;
//         }
//         temp=head;
//         Node* t =headcopy;
//         while(t !=NULL){
//             t->arb = m[temp->arb];
//             temp=temp->next;
//             t=t->next;
//         }
//         return headcopy;
//     }

// use pointers only and no array or map then sc = o(1)