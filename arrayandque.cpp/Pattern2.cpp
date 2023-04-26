// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=4; i++){
//         for(int j=1; j<=3;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//}

// ||-->or
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=7;i++){
//         for(int j=1;j<=4;j++){
//             if(i==1 || i==7|| j==1 ||j==4){
//                 cout<<"*"<<"";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// ******************************************************INVERTED triangle;******************************************************
// #include<iostream>
// using namespace std;
// int main( ){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if (j>=6-i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// ***********************butterlfly************************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for (int j=0;j<i;j++){
//             cout<<"*";
//         }
//         for (int j=0;j<(n-i)*2;j++){
//             cout<<" ";
//         }
//         for (int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>0;i--){
//         for (int j=0;j<i;j++){
//             cout<<"*";
//         }
//         for (int j=0;j<(n-i)*2;j++){
//             cout<<" ";
//         }
//         for (int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ********************************************************inverted pattern************************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int c=1;
//     int r=n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=r;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//         r--;
//     }
// }

// ******************************************************************0-1 Pattern**************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((j+i)%2==0){
//                 cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
// }

//****************************************************************************  Rhombus*************************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// *************************************************************************IMPORTANT*****************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enetr n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// *************************************************************************Very IMPORTANT****************************************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// ************************************************************************* very IMPORTANT***************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=0;j<n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// *************************************************************************zig zag ***************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=3;i>=1;i--){
//         for(int j=1;j<=n;j++){
//             if((i+j)%4==2){
//                 cout<<"*";
//             }
//             else if(i==2 and (i+j)%4==0){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// // *************************************************************************IMPORTANT***************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int r=i;
//         for(int j=1;j<=i;j++){
//             if(r>0){
//                 cout<<r;
//                 r--;
//             }
//         }
//         cout<<endl;
//     }
// }

// // *************************************************************************AAA?BBB?CCC***************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<char(64+i);
//         }
//         cout<<endl;
//     }
// }

// *************************************************************************ABC STAIR***************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(64+r);
//             r++;
//         }
//         cout<<endl;
//     }
// }

// *************************************************************************1/121/12321***************************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     int c=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


// ****************************************************Rev no.****************************** 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int rev=0;
//     while (n>0){
//         int t=n%10;
//         rev=rev*10+t;
//         n=n/10;
//     }
//     cout<<rev;
// }















