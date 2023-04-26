// heap is complete binary tree with heap order property
// CBT is tree where every level is completely filled except the last level
// nodes always added from left or nodes lean towards left

// heap order prop => a=> Max heap  child always less than parent node in value
//  b=> min heap two childs are greater than parent node in value


// MAX HEAP
// insertion using array
// tree=>    60
//          /  \
//         50  40
//        /  \
//       30  20                let in array of size : node+1:    arr= {NULL , 60 , 50 ,40 ,30 ,20}

// ######### NOTE: FOR CBT LEAF NODE: NODE WITHOUT CHILD ARE FROM INDEX (N/2+1) TO N #########################################

// FOR ABOVE N= 5 => LEAF == 3 TO 5 INDEX

// if parent at ith index => left child at 2*i, right at 2*i+1

// insert 55:
// 0th pos as NULL or empty
// add to array at last  : arr= {NULL , 60 , 50 ,40 ,30 ,20,55}
// at 6th index => it is at right of 40 in bt
// take to right pos: compare to parent if it is small or not as Max heap
// here 40 is 55 parent hence not correct pos->swap
// now 60 is parent of 55 and 40 is child of 55  : correct pos hence done
// tree=>    60
//          /  \
//         50   55
//        /  \  /
//       30  20 40  

// deletion :   we always delete root node
//  1. swap 1st element with last in array
// 2. delete last node
// 3. find correct pos of swapped root node element

#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        size = 0;
        arr[0]=-1;
    }
    void insert(int x){
        size++;
        int index=size;
        arr[index] =x;

        // find parent
        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    // O(logn) both del and insert
    void del(){
        if(size==0){
            cout<<"Heap empty"<<endl;
            return;
        }
        // step 1
        swap(arr[1],arr[size]);
        // step 2
        size--;
        // step 3
        int index=1;
        while(true){
            if(2*index<=size && arr[index]<arr[2*index]){
                swap(arr[index],arr[2*index]);
                index=2*index;
            }
            else if(2*index+1<=size && arr[index]<arr[2*index+1]){
                swap(arr[index],arr[2*index+1]);
                index=2*index+1;
            }
            else{
                break;
            }
        }

    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

};

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    h.del();
    h.print();
}