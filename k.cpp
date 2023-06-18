#include<iostream>
using namespace std;
int val(int arr[],int n){
    for(int i=0;i<n;i++){
        int r;
        cout<<"El: ";
        cin>>r;
        arr[i]=r;
    }
    return 0;
}
int bins(int arr[],int n,int z){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if (arr[mid]>z){
            e=mid-1;
        }
        else if(arr[mid]<z){
            s=mid+1;
        }
        else{
            return mid;
            break;
        }
    }
    return 0;
}
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void selectionsort(int arr[],int n){
    // Selection sort
    for (int i=0;i<n;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mi]){
                mi=j;
            }
        }
        swap(arr[i],arr[mi]);
    }
}
void bubblesort(int arr[],int n){

    bool swapped=false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
            // as sorted, optimised code;
        }
    }
}
void insertionsort(int arr[],int n){
    int s=0;
    while(s<n){
        int e=s-1;
        int temp=arr[s];
        while(e>=0){
            if(arr[e]>temp){
                arr[e+1]=arr[e];
            }
            else{
                break;
            }
            e--;
        }
        arr[e+1]=temp;
        s++;
    }
}
void altswap(int arr[],int n){
   int  s=0,e=n-1;
    while(s<e){
        swap(arr[s],arr[s+1]);
        s+=2;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void pivot(int arr[],int n){
    int s=0,e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]<arr[0]){
            e=mid;
        }
        else if(arr[mid]>arr[0]){
            s=mid+1;
        }
    }
    cout<<arr[e];
}
#include<vector>
#include<string>
int main(){
    vector<int> v={0,1};
    vector<int> a={0,1,0};
    cout<<char('a'+1);

}