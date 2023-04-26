// *************************************************************fn syntax*******************************
// #include<iostream>
// using namespace std;
// void print(int n){
//     cout<<n<<endl;
// }
// int add(int num1,int num2){
//     print(num1);
//     print(num2);
//     int sum = num1 +num2;
//     return sum;
// }
// int main(){
//     int a=2;
//     int b=3;
//     cout<<add(a,b);
//     return 0;
// }

// *************************************************************Prime*******************************
// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isprime(int t){
//     for(int i=2;i<=sqrt(t);i++){
//         if(t%i==0){
//             return false;
//             break;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"N";
//     cin>>n;
//     if(isprime(n)){
//         cout<<"Prime";
//     }
//     else{
//         cout<<"not prime";
//     }
// }

// *************************************************************fibonacci*******************************
// #include<iostream>
// #include<math.h>
// using namespace std;
// int fib(int n){
//     cout<<"0 ";
//     cout<<"1 ";
//     int t=1;
//     int r=1;
//     int q=1;
//     for(int i=1;i<=n-2;i++){
//         cout<<t<<" ";
//         int r=t;
//         t=t+q;
//         q=r;
//     }
//     return 0;
// }
// int main(){
//     int q;
//     cout<<"Upto dig: ";
//     cin>>q;
//     fib(q);
//     return 0;
// }

// *************************************************************ncr*******************************
// #include<iostream>
// #include<math.h>
// using namespace std;
// int fac(int q){
//     int t=1;
//     for(int i=1;i<=q;i++){
//         t=t*i;
//     }
//     return t;
// }
// int ncr(int a,int b){
//     int w=fac(a);
//     int e=fac(b);
//     int x=fac((a-b));
//     int ncr=w/(x*e);
//     cout<<"NcR= "<<ncr;
//     return 0;
// }
// int main(){
//     int n,r;
//     cout<<"N: ";
//     cin>>n;
//     cout<<"R: ";
//     cin>>r;
//     ncr(n,r);
//     return 0;
// }

// *************************************************************Passcal triangle*******************************
// #include<iostream>
// using namespace std;
// int fac(int n){
//     int r=1;
//     for(int i=1;i<=n;i++){
//         r=r*i;
//     }
//     return r;
// }
// int ncr(int a,int b){
//     int w=fac(a);
//     int e=fac(b);
//     int x=fac((a-b));
//     int req=w/(x*e);
//     cout<<req<<" ";
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter N: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             ncr(i,j);
//         }
//         cout<<endl;
//     }
// }

// *************************************************************sum of first n natural *******************************
// #include<iostream>
// using namespace std;
// int sum(int n){
//     int sum=n*(n+1)/2;
//     cout<<sum;
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"N: ";
//     cin>>n;
//     sum(n);
//     return 0;
// }



