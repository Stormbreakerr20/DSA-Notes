// APPLication of heapify

// step1: swap arr[1] and arr[last]
// step2: largest element at last done hence remove that node i.e size--
// step3: find correct pos of new arr[1] by heapify 
// step 4: repeat from step1
#include<iostream>
using namespace std;

void heapify(int *arr , int n ,int i){
    int largest =i;
    int left =2*i;
    int right = 2*i+1;

    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }
    if(left<=n && arr[left]>arr[largest]){
        largest=left;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int*arr,int n){
    if(n==0){
        return;
    }
    // step 1
    swap(arr[1],arr[n]);
    // step2
    n--;

    // step3
    heapify(arr,n,1);

    // step4
    heapsort(arr,n);
}



int main(){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    int arr[6] = {-1,5,6,8,3,9};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,5,i);
    }
    // heap sort sorts the correct heap which follows max heap rules
    heapsort(arr,n);
    
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}