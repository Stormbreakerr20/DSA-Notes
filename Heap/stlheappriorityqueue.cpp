#include<iostream>
using namespace std;
#include<queue>

// creating a heap for pair  result in sorting based on first element of pair i.e i.first

int main(){
    // note pop will delete head node;

    // Max heap
    // priority_queue<int> maxheap;
    // maxheap.push(1);
    // maxheap.push(2);
    // maxheap.push(3);

    // maxheap.empty();
    // maxheap.size();
    // maxheap.pop();
    // maxheap.top();

    // Min heap
    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(1);
    minheap.push(2);
    minheap.push(3);
    
    cout<<minheap.size();
    minheap.pop();
    cout<<minheap.top();
}


