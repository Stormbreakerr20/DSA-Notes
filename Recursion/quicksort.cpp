// https://www.geeksforgeeks.org/quick-sort/   imp



//  use & when passing vector so it doesnt make copy








#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int piv=s;
    int c=0;
    for(int i=s+1;i< e+1;i++){
        if(arr[i]<arr[piv]){
            c++;
        }
    }
    swap(arr[piv],arr[c+s]);
    piv=c+s;
    int i=0,j=e;
    while(i<piv && j>piv){
        while(arr[i]<arr[piv]){
            i++;
        }
        while(arr[j]>arr[piv]){
            j--;
        }
        if(i<piv && j>piv){
            swap(arr[i++],arr[j--]);
        }
    }
    return piv;
}
void spliting_through_pivot(int *arr,int s,int e){
    //base
    if(s>=e){
        return;
    }

    int piv=partition(arr,s,e);

    //rr

    //left
    spliting_through_pivot(arr,s,piv-1);

    //right
    spliting_through_pivot(arr,piv+1,e);
}

int main(){
    int arr[5]={3,5,4,2,1};
    spliting_through_pivot(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}