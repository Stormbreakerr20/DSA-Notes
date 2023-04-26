#include<iostream>
using namespace std;
bool issorted(int n,int arr[]){
    //base
    if((n==0)||(n==1)){
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    return issorted(n-1,arr+1);        // pointers logic: now sending array from index 1
}
int sum_arr(int n, int arr[],int sum){
    //base
    if (n==0){
        return sum;
    }
    //process
    sum=sum+arr[0];
    //RR
    return sum_arr(n-1,arr+1,sum);
} 
void rev_str(string &a,int i,int j){          // to remove error of pass by value use &
    //base
    if(i>j){
        return;
    }
    swap(a[i],a[j]);
    i++;
    j--;
    //RR
    rev_str(a,i,j);
}


bool found(int n,int *arr, int z){
    //base
    if(n==0){
        return false;
    }
    else if(arr[0]==z){
        return true;
    }
    //RR
    return found(n-1,arr+1,z);
    
}
int bins(int z,int s,int e,int *arr){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]>z){
        return bins(z,s,mid-1,arr);
    }
    else if(arr[mid]<z){
        return bins(z,mid+1,e,arr);
    }
    return mid;
}
void bubblesort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
}

int power(int a,int b){
    if(b==0){
        return 1;
    }
    else if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    
    if(b%2==0){
        return  ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
	

int main(){
    // int arr[5]={1,2,3,4,5};
    // cout<<bins(0,0,4,arr);
    // string s="Luv";
    // rev_str(s,0,2);
    // cout<<s;


    // int arr[5]={5,4,3,2,1};
    // bubblesort(arr,5);
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }


}