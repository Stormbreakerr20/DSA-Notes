#include<iostream>
#include<stack>
using namespace std;

// class Stack
class Stack{
    // properties
    public:
        int top;
        int *arr;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // function of stack
    void push(int d){
        if(top>=size-1){
            cout<<"Overflow"<<endl;
            return;
        }
        arr[++top]=d;
    }
    void pop(){
        if(top<=-1){
            cout<<"Empty"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top<=-1){
            cout<<"Underflow"<<endl;
            return 0;
        }
        return arr[top];
    }
};




int main(){
    //creation
    stack<int> s;

    //push
    s.push(2);
    s.push(3);
    // pop
    s.pop();
    // peek
    cout<<"Top element : "<<s.top()<<endl;

    // empty
    if(s.empty()){
        cout<<"is empty";
    }
    // size 
    s.size();

    Stack s1 = Stack(2);
    s1.push(1);
    s1.push(2);
    s1.pop();
    cout<<s1.peek();




}