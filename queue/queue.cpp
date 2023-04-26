#include<iostream>
#include<queue>
using namespace std;

// class Stack
#include <bits/stdc++.h> 
class Queue {
    int bottom;
    int *arr;
    int f;
public:
    Queue() {
        // Implement the Constructor
        arr= new int[5000];
        bottom =0;
        f =0;
        
    }
    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(bottom==f){
            return true;
        }
        return false;
    }
    void enqueue(int data) {
        // Implement the enqueue() function
        arr[bottom++]=data;
    }
    int dequeue() {
        // Implement the dequeue() function
        if(bottom ==f){
            return -1;
        }
        int val=arr[f++];
        if(f==bottom){
            f=0;
            bottom=0;
        }
        return val;
    }

    int front() {
        // Implement the front() function
        if(bottom==f){
            return -1;
        }
        return arr[f];
    }
};



int main(){
    //creation
    queue<int> s;
    // FIFO

    //push
    s.push(2);
    s.push(3);
    // pop
    s.pop();
    // peek
    cout<<"Top element : "<<s.front()<<endl;  // ===> 3

    // empty
    if(s.empty()){
        cout<<"is empty";
    }
    // size 
    s.size();



}