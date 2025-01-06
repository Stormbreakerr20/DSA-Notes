// **********************************************Find Unique element [https://bit.ly/3y01Zdu ]
// int main(){                            M1 
//     int n=5;
//     int arr[n];
//     val(arr,n);
//     for (int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//             else;{
//                 continue;
//             }
//         }
//         if(count==1){
//             cout<<arr[i];
//         }
//     }
// }
// M2 XOR
// int main(){
//     int n=5;
//     int arr[n];
//     int r=0;
//     val(arr,n);
//     for(int i=0;i<n;i++){
//         r=r^arr[i];
//     }
//     cout<<r;
// int main(){
//     int arr[100]={1,2,3,4,4};
//     int val=0;
//     for(int i=0;i<5;i++){
//         val=val^arr[i];
//     }
//     for(int i=1;i<5;i++){
//         val=val^i;
//     }
//     cout<<val;
// }

// *********************************************************************- Array Intersection [https://bit.ly/3Il0c7n ]
// M-1
// int main(){
    // int arr1[6]={1,2,2,2,3,3};
    // int arr2[3]={2,3,4};
//     for(int i=0;i<6;i++){
//         for(int j=0;j<3;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i];
//                 arr2[j]=INT_MIN;
//                 break;
//             }
//         }
//     }
// }
// M-2 fast                          ********************************* 2 pointers
// int main(){
//     int arr1[6]={1,2,2,2,3,5};
//     int arr2[3]={2,3,4};
//     int i=0,j=0;
//     while(i<6 && j<3){
//         if(arr1[i]<arr2[j]){
//             i++;
//         }
//         else if(arr1[i]==arr2[j]){
//             cout<<arr1[i];
//             i++,j++;
//         }
//         else if(arr1[i]>arr2[j]){
//             j++;
//         }
//     }
// }

// *********************************************************************-  Pair Sum [https://bit.ly/3EwlU6e ]
// int main(){
//     int arr[6]={2,-3,3,3,-2};
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[i]+arr[j]==0){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }

// *************************************************************sort 01
// int main(){
//     int arr[6]={1,0,1,1,0,0};
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<7;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     print(arr,6);
// }
// int bins(int arr[],int n,int z){
//     int s=0,e=n-1;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]!=z && s==e){
//             cout<<"Not there";
//             break;
//         }
//         else if(arr[mid]==z){
//             cout<<"index: "<<mid<<"Key: "<<arr[mid];
//             break;
//         }
//         else if(arr[mid]>z){
//             e=mid-1;
//         }
//         else if(arr[mid]<z){
//             s=mid+1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int even[6]={2,4,6,8,12,18};
//     int odd[5]={3,8,11,14,16};
//     bins(even,6,8);
//     bins(odd,5,9);
// }

//******************************Rotate array by k steps   Rotate arrays: https://leetcode.com/problems/rotate-...
// #include<algorithm>
// #include<vector>
// int main(){
//     int k=2;
//     int size =4;
//     int arr[size]={-1,-100,3,99};
//     ////////////////////////////////////////////m-1
//     for(int i=0;i<k;i++){
//         int t=arr[3];
//         for (int j =3 ;j>=1;j--){
//             arr[j]=arr[j-1];
//         }
//         arr[0]=t;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     ////////////////////////////////////////////m-2 
//     int v[size];
//     for (int i=0;i<size;i++){
//         v[(i+k)%size]=arr[i];
//     }
//     for(int i:v){
//         cout<<i<<" ";
//     }
// }

//- Check if rotated and sorted array: https://leetcode.com/problems/check-i...
// bool sorted(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         if (arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }
    // bool check(vector<int>& nums) {
    //    //Check if array can be divided into two monontonous arrays
    //    int count = 0;
    //    int n = nums.size();
    //     for(int i = 0; i<n-1; i++)
    //     {
    //         if (nums[i] > nums[i+1])
    //             count++;
    //     }
    //     if (nums[n-1] > nums[0])
    //         count++;
    //     return (count<2);
    // }

// Add arrays: https://bit.ly/3DXfsDZ 
// int main(){
//     int l1=4,l2=1;
//     int arr1[4]={8,9,9,4};
//     int arr2[1]={6};
//     int s1=l1-1,s2=l2-1,sum=0;
//     int carry=0;
//     vector<int> v;
//     while((s1>-1)&&(s2>-1)){
//         sum=arr1[s1]+arr2[s2]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         v.push_back(sum);
//         s1--;
//         s2--;
//     }
//     while(s1>=0){
//         sum=arr1[s1]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         v.push_back(sum);
//         s1--;
//     }
//     while(s2>=0){
//         sum=arr2[s2]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         v.push_back(sum);
//         s2--;
//     }
//     if (carry>0){
//         v.push_back(carry);
//     }
//     for(int i=v.size()-1;i>=0;i--){
//         cout<<v[i];
//     }
// }

// snow ball solution :   move zeroes to right end : https://leetcode.com/problems/move-zeroes/solutions/172432/the-easiest-but-unusual-snowball-java-solution-beats-100-o-n-clear-explanation/
//best sol: https://leetcode.com/problems/move-zeroes/submissions/896549594/

//Reverse an Array: https://bit.ly/3EOyAFz 
//- Merge 2 sorted arrays:https://leetcode.com/problems/merge-s... 