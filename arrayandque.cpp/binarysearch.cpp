#include<iostream>
using namespace std;
int val(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"EL: ";
        cin>>arr[i];
    }
    return 0;
}
// use mid= s+ (e-s)/2  as (s+e)/2   can overflow for 2^31-1







//- First/Last Occurrence of an Element in array: https://bit.ly/3Ioexjh and find no. of occurence
// int fal(int arr[],int n,int z){
//     int s=0,e=n-1,f=-1,l=-1,r=0,w=n-1;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==z){
//             f=mid;
//             e=mid-1;
//         }
//         else if(arr[mid]<z){
//             s++;
//         }
//         else if(arr[mid]>z){
//             e--;
//         }
//     }
//     while(r<=w){
//         int mid2=(w+r)/2;
//         if(arr[mid2]==z){
//             l=mid2;
//             r=mid2+1;
//         }
//         else if(arr[mid2]>z){
//             w--;
//         }
//         else if(arr[mid2]<z){
//             r++;
//         }
//     }
//     cout<<f<<" "<<l<<endl;
//     cout<<"No. of occurence of "<<z<<": "<<l-f+1;
//     return 0;
// }
// int main(){
//     int arr[7]={1,2,3,3,3,3,5};
//     fal(arr,7,3);
// }

// Peak index 
// int val(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<"EL: ";
//         cin>>arr[i];
//     }
//     return 0;
// }
// int peak(int arr[],int n){
//     int s=0,e=n-1;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]>arr[mid +1] && arr[mid]>arr[mid-1]){
//             cout<<mid;
//             break;
//         }
//         else if(arr[mid]<arr[mid+1]){
//             s=mid;
//         }
//         else if(arr[mid]<arr[mid-1]){
//             e=mid;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int arr[n];
//     val(arr,n);
//     peak(arr,n);
// }

// // Pivot in array and search
// int val(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<"EL: ";
//         cin>>arr[i];
//     }
//     return 0;
// }
// int piv(int arr[],int n){
//     int s=0,e=n-1;
//     while(s<e){
//         int m=(s+e)/2;
//         if(arr[m]>=arr[0]){
//             s=m+1;
//         }
//         else{
//             e=m;
//         }
//     }
//     return s;
// }
// int bins(int arr[],int n,int p,int z){
//     int s=p,e=n-1;
//     while(s<=e){
//         int m=(s+e)/2;
//         if(arr[m]<z){
//             s=m+1;
//         }
//         else if(arr[m]>z){
//             e=m-1;
//         }
//         else if(arr[m]==z){
//             cout<<"Present";
//             s=-1;
//             break;
//         }
//     }
//     if(s!=-1){
//         cout<<"absent";
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter: ";
//     cin>>n;
//     int arr[n];
//     val(arr,n);
//     int z;
//     cout<<"find: ";
//     cin>>z;
//     int p=piv(arr,n);
//     cout<<p<<endl;
//     if(arr[p]<=z &&arr[n-1]>=z){
//         bins(arr,n,p,z);
//     }
//     else if(arr[0]<=z &&arr[p-1]>=z){
//         bins(arr,p,0,z);
//     }
//     else{
//         cout<<"absent";
//     }
// }

// // square root using bins
// int bins(int arr[],int n,int z){
//     int s=0,e=n-1;
//     while(s<=e){
//         int m=(s+e)/2;
//         int x=(arr[m])*(arr[m]);
//         int y=(arr[m+1])*(arr[m+1]);
//         if(x<=z && y>z){
//             return arr[m];
//             break;
//         }
//         else if(x>z){
//             e=m;
//         }
//         else{
//             s=m+1;
//         }
//     }
//     return 0;
// }
// int dec(int z,double t,int y){
//     double r=1;
//     for(int i=1;i<=y;i++){
//         r=r/10;
//         while(true){
//             t=t+r;
//             if(t*t>=z){
//                 t-=r;
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
//     cout<<t;
//     return 0;
// } 
// int main(){
//     int arr[100];
//     for(int i=0;i<100;i++){
//         arr[i]=i+1;
//     }
//     int n,r;
//     cout<<"N: ";
//     cin>>n;
//     cout<<"Upto: ";
//     cin>>r;
//     int x=bins(arr,100,n);
//     if(x*x!=n){
//         dec(n,x,r);
//     }
//     else{
//         cout<<x;
//     }
// }

// //  Book Allocation Problem: https://bit.ly/3GiCqY0 
// bool check(int arr[],int n,int m,int mid){
//     int sum=0,stud=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]+sum<=mid){
//             sum+=arr[i];
//         }
//         else{
//             stud++;
//             sum=arr[i];
//             if(stud>m || arr[i]>mid){
//                 i=n;
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int bins(int arr[],int n,int m){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum +=arr[i];                                                           
//     }
//     int arr2[sum];
//     for(int i=0;i<=sum;i++){
//         arr2[i]=i;
//     }
//     int s=0,e=sum;
//     int mid;
//     while(s<=e){
//         mid=(s+e)/2;
//         if(check(arr,n,m,mid)){     
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     cout<<s;
//     return 0;
// }
// int main(){
//     int n,m;
//     cout<<"N: ";
//     cin>>n;
//     cout<<"M: ";
//     cin>>m;
//     int arr[n];
//     val(arr,n);
//     bins(arr,n,m);
// }

// - Painter’s Partition Problem: https://bit.ly/31v3Jiy 
// bool check(int arr[],int n,int k,int mid){
//     int sum=0,w=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]+sum<=mid){
//             sum+=arr[i];
//         }
//         else{
//             w++;
//             sum=arr[i];
//             if(w>k||arr[i]>mid){
//                 i=n;
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// void bins(int arr[],int n,int k){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int arr2[sum];
//     for(int i=0;i<=sum;i++){
//         arr2[i]=i;
//     }
//     int s=0,e=sum;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(check(arr,n,k,mid)){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     cout<<s;
// }
// int main(){
//     int n,k;
//     cout<<"N: ";
//     cin>>n;
//     cout<<"k: ";
//     cin>>k;
//     int arr[n];
//     val(arr,n);
//     bins(arr,n,k);
// }

//  Aggressive Cows: https://bit.ly/3dkuQ2B 
// void dis(int arr[],int n,int k){
//     int s=0,e=n-1,dist=0;
//     while(s<=e){
//         int t=s;
//         while(t<=e){
//             if(abs(arr[s]-arr[t])>=dist){
//                 dist=abs(arr[s]-arr[t]);
//             }
//             t++;
//         }
//         s++;
//     }
//     cout<<dist;
// }
// int main(){
//     int n,k;
//     cout<<"N: ";
//     cin>>n;
//     cout<<"k: ";
//     cin>>k;
//     int arr[n];
//     val(arr,n);
//     dis(arr,n,k);
// }

// continous sum position; 1,2,3,7,5 sum=12 o/p 2 to 4
// void consum(int arr[],int n,int k){
//     int s=0,e=n-1;
//     int sum=0,t;
//     while(s<=e){
//         if(sum==k){
//             cout<<++s<<" "<<++t;
//             break;
//         }
//         t=s+1;
//         while(t<=e){
//             if(arr[s]>k||sum>k){
//                 break;
//             }
//             else if(sum+arr[t]<k){
//                 sum+=arr[t];
//             }
//             else if(sum+arr[t]==k){
//                 sum+=arr[t];
//                 break;
//             }
//             t++;
//         }
//         s++;
//     }
// }
// int main(){
//     int n,k;
//     cout<<"N: ";
//     cin>>n;
//     cout<<"K: ";
//     cin>>k;
//     int arr[n];
//     val(arr,n);
//     consum(arr,n,k);
// }

// // find smallest positive no. missing 
// bool linsearch(int arr[],int n,int z){
//     for(int i=0;i<=n;i++){
//         if(arr[i]==z){
//             return true;
//         }
//     }
//     return false;
// }
// void miss(int arr[],int n){
//     int r=0;
//     for(int i=0;i<=n;i++){
//         if(linsearch(arr,n,i)){
//             continue;
//         }
//         else{
//             r=i;
//             i=n+1;
//         }
//     }
//     cout<<r;
// }
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int arr[n];
//     val(arr,n);
//     miss(arr,n);
// }

