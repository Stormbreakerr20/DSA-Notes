// https://www.geeksforgeeks.org/merge-sort/







#include<iostream>
using namespace std;
// Merge Sort
void mergesort(int *arr,int s,int e){
    int mid=(s+e)/2;
    int mainarrayindex=s;
    
    // creating copies  array
    int len1=mid-s+1;
    int len2= e-mid;
    int *copyleft=new int[len1];
    int *copyright=new int[len2];

    for(int i=0;i<len1;i++){
        copyleft[i]=arr[mainarrayindex++];
    }

    for(int i=0;i<len2;i++){
        copyright[i]=arr[mainarrayindex++];
    }

    // merge 2 sorted array;
    mainarrayindex=s;

    int index1=0,index2=0;
    while((index1<len1)&&(index2<len2)){
        if(copyleft[index1]<copyright[index2]){
            arr[mainarrayindex++]=copyleft[index1++];
            
        }
        else{
            arr[mainarrayindex++]=copyright[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayindex++]=copyleft[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=copyright[index2++];
    }

    // just by writing below line code beats 80% from 34%    delete the heap memory
    delete []copyleft;
    delete []copyright;
}



void Breakingarrays(int  *arr,int s,int e){
    //base
    if(s>=e){
        return;
    }
    int mid= (s+e)/2;
    //break left part
    Breakingarrays(arr,s,mid);
    //break right part
    Breakingarrays(arr,mid+1,e);

    //Merge arrays with sort
    mergesort(arr,s,e);
}




int main(){
    int arr[5]={5,5,3,5,6};

    Breakingarrays(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}