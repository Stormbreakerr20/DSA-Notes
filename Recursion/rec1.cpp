#include<iostream>
using namespace std;
// int fib(int n){
//     if (n==0){
//         return 1;
//     }

//     return n*fib(n-1);

//     // recursion need small prob like n-1 and big prob like n 
//     // need base condition like n==0

//     // here fac(n)=n*fac(n-1) until fac(n-1)==0 where 0!=1;
// }
// Imp : Base case important as else it will lead to stack overflow
// return mandatory

//  tail recursion                 // head rec
//  func(){                            func(){
//     base condition                         base condition

//     processing                             rec call

//     recursive call                         processing
// }                                    }

// we can get empty return

// void countingtail(int n){
    
//     if (n==0){
//         return ;
//     }
//     cout<<n<<" ";
//     countingtail(n-1);
// }
// void countinghead(int n){
    
//     if (n==0){
//         return ;
//     }
//     countinghead(n-1);
    
//     cout<<n<<" ";
// }

// int fibonacci(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     return fibonacci(n-1)+fibonacci(n-2)
// }

// - Climb Stairs: https://bit.ly/32VA96H
// int stairs(int n){
//     if(n<0){
//         return 0;
//     }
//     else if(n==0){
//         return 1;
//     }
//     return stairs(n-1) + stairs(n-2);
// }

// say digit like 41 --> four one
void saydig(int n,string arr[]){
    // base
    if(n==0){
        return;
    }

    // processing
    int dig=n%10;
    n=n/10;

    // RR
    saydig(n,arr);

    cout<<arr[dig]<<" ";

}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    // cout<<fib(6) <<endl;
    // countingtail(5);
    // cout<<endl;
    // countinghead(5);
    // cout<<endl<<stairs(5)<<endl;
    saydig(412,arr);
}