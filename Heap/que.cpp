// - Build Min-Heap: https://www.codingninjas.com/codestud...

//  Kth Smallest element: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
// algo: m-1 heap sort nlogn
//     : m-2 create heap of first k elements i.e 0 to k-1 , 
        // then for rest elements k to n if element<hep.top()=> heap.pop(),heap.push(element),
        // then after completing the loop and will be heap.top;
// note heap.pop() deletes head node i.e index 0

// TC = o(k)
// $$$$$$$$$$$$$$$$$$$$$$$$      to find largest element use min heap $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// Merge 2 Heaps: https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1
// Min Cost of "n" ropes:https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
// - Convert BST into HEAP: https://www.geeksforgeeks.org/convert-bst-min-heap/
//  Is Tree a Heap: https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1

// Kth Largest Sum Subarray: https://www.codingninjas.com/codestudio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=3
// m-1
// make sum array of length n*2 sort it ans is kth element ===> TC=n*2(logn)

// #####################################    vvvvv imp que

// Merge K sorted array https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379?leftPanelTab=0
// #include <bits/stdc++.h> 
// class node{
//     public:
//     int data;
//     int i;
//     int j;   
//     node(int arrindex,int indexinarr,int d){
//         this->i=arrindex;
//         this->j=indexinarr;
//         this->data=d;
//     }
// };
// class compare{
//     public:
//     bool operator()(node* a,node*b){
//         return a->data>b->data;
//     }
// };
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {
//     // Write your code here. 4
//     priority_queue<node*,vector<node*>,compare> pq;
//     for (int i=0;i<k;i++){
//         node* n=new node(i,0,kArrays[i][0]);
//         pq.push(n);
//     }
//     vector<int> ans;
//     while(pq.size()>=1){      
//         ans.push_back(pq.top()->data);
//         if(pq.top()->j+1<(kArrays[pq.top()->i]).size()){ 
//             node*insert=new node(pq.top()->i,pq.top()->j+1,kArrays[pq.top()->i][pq.top()->j+1]);
//             pq.pop();
//             pq.push(insert);
//         }
//         else{
//             pq.pop();
//         }
//     }
//     // ans.push_back(pq.top()->data);    
//     return ans;   
// }

// first for loop TC = k*(minheap push)= k(logn) + elements left for while = n*k-k==>n*k ==> TC of while => n*k(logk)
// TC=>(n*k)log(k)
// SC : O(k) +O(n*k)  => heap + vector ans  =>O(n*k)

// Merge K sorted linked list : https://www.codingninjas.com/codestudio/problems/merge-k-sorted-lists_992772?leftPanelTab=0

// HARD

// - Smallest Range in K sorted List: https://www.codingninjas.com/codestudio/problems/smallest-range-from-k-sorted-list_1069356?leftPanelTab=1
//  Median in a Stream: 
// check from luv babar algo  https://www.youtube.com/watch?v=RrxpTWqj97A&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA



















