// #include<iostream>
// using namespace std;
// int main(){
//     int array[4]={1,2,3,4};
//     char ch[3]={'a','b','c'}
// }

// user def
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int array[n];
//     for(int i =0;i<=n;i++){
//         cout<<"Element "<<i+1<<" : ";
//         cin>>array[i];
//     }
//     cout<<array[3];
// }

// *******************************************Max Min
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter N: ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout<<"EL "<<i+1;
//         cin>>array[i];
//     }
//     int max=array[0];
//     int min=array[0];
//     for(int i=0;i<n;i++){
//         if(array[i]>=max){
//             max=array[i];
//         }
//         if(array[i]<=min){
//             min=array[i];
//         }
//     }
//     cout<<min<<endl;
//     cout<<max<<endl;
// }

// M-2**********************************CLimits
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter N: ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout<<"EL "<<i+1;
//         cin>>array[i];
//     }
//     int ma=INT_MIN;
//     int mi=INT_MAX;
//     for(int i=0;i<n;i++){
//         ma=max(ma,array[i]);
//         mi=min(mi,array[i]);
//     }
//     cout<<mi<<endl;
//     cout<<ma<<endl;
// }

// **************************************************************LINEAR SEARch in array*****************************
// #include<iostream>
// using namespace std;
// int main(){
//     int array[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
//     int n;
//     cout<<"Key: ";
//     cin>>n;
//     for(int i=0;i<5;i++){
//         if(array[i]==n){
//             cout<<"Index: "<<i;
//         }
//         else{
//             continue;
//         }
//     }
// }

//************************************************************** bin SEARch in array*****************************
// #include<iostream>
// using namespace std;
// int bin(int arr[],int n,int k){
//     int s=0,e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(mid==arr[k]){
//             cout<<"Index: "<<mid;
//             break;
//         } 
//         else if(mid>arr[k]){
//             e=mid-1;
//         }
//         else if(mid<arr[k]){
//             s=mid+1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout<<"EL ";
//         cin>>array[i];
//     }
//     int Key;
//     cout<<"Key: ";
//     cin>>Key;
//     bin(array,n,Key);
// }


//#################################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ SORTING

// SELECTION sort
// #include<iostream>
// #include<climits>
// using namespace std;
// int mini(int arr[],int n,int s){
//     int mi=INT_MAX;
//     int r;
//     for(int i=s;i<n;i++){
//         if(arr[i]<=mi){
//             mi=arr[i];
//             r=i;
//         }
//     }
//     return r;
// }
// int sort(int arr[],int n){
//     int s=0,e=n-1;
//     while(s<=e){
//         int r=mini(arr,n,s);
//         int t=arr[s];
//         arr[s]=arr[r];
//         arr[r]=t;
//         s+=1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout<<"EL: ";
//         cin>>array[i];
//     }
//     sort(array,n);
// }


// M-2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout<<"EL: ";
//         cin>>array[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){                     //IMP####################
//             if(array[i]>array[j]){
//                 int t=array[i];
//                 array[i]=array[j];
//                 array[j]=t;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" "<<endl;
//     }
// }

// ***************************sum 
// #include<iostream>
// using namespace std;
// int val(int arr[],int n){
//     int r;
//     for(int i=0;i<n;i++){
//         cout<<"EL "<<i<<" ";
//         cin>>r;
//         arr[i]=r;
//     }
//     return 0;
// }
// int main(){
//     int n=5;
//     int arr[5];
//     val(arr,5);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<sum;
// }


// ****************************************REV
// #include<iostream>
// using namespace std;
// int val(int arr[],int n){
//     int r;
//     for(int i=1;i<=n;i++){
//         cout<<"EL "<<i<<" ";
//         cin>>r;
//         arr[i-1]=r;
//     }
//     return 0;
// }
// int print(int arr[],int n){
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// int main(){
//     int n=5;
//     int arr[5];
//     val(arr,5);
//     // int ar[n];                         creating another array
//     // for (int i=0;i<n;i++){
//     //     ar[i]=arr[n-i-1];
//     // }
//     // print(ar,5);
    //     int s=0,e=n-1;
//     while(s<=e){                      swap
//         swap(arr[s],arr[e]);                  
//         s++;
//         e--;
//     }
//     print(arr,n);                                    
// }

// ********************************************************Alternate swap***************
// #include<iostream>
// using namespace std;
// int val(int arr[],int n){
//     int r;
//     for(int i=1;i<=n;i++){
//         cout<<"EL "<<i<<" ";
//         cin>>r;
//         arr[i-1]=r;
//     }
//     return 0;
// }
// int print(int arr[],int n){
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// int main(){
//     int n=6;
//     int arr[6];
//     val(arr,n);
//     for(int i=0;i<n;i+=2){
//         swap(arr[i],arr[i+1]);
//     }
//     print(arr,n);                                    
// }









// #############################                            SUBARRAY



// #include<iostream>
// using namespace std;
// int val(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<"EL: ";
//         cin>>arr[i];
//     }
//     return 0;
// }
// printing 
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int arr[n];
//     val(arr,n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k];
//             }
//             cout<<endl;
//         }
//     }
// }

// cumulative sum
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int arr[n];
//     val(arr,n);
//     for(int i=1;i<n;i++){
//         arr[i]+=arr[i-1];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// max subarray sum
// int main(){
//     int arr[5]={-1,2,4,-7,3};
//     int sum=0;
//     int t=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]<0){
//             t=sum;
//             sum=0;
//         }
//         else{
//             sum+=arr[i];
//         }
//     }
//     cout<<max(t,sum);
// }

// 












