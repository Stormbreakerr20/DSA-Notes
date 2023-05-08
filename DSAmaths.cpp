#include<math.h>
#include<iostream>
using namespace std;
#include<vector>

//////////m-2    sieve
// let n=10         0,1 not prime then 2 prime so eliminate all no. which are in table of 2, then 3 prime so eliminate all in table of three and so on 

// t.c = n*(n/2+n/3+n/5......) => n*(log(logn))
void count_prime_sieve(int n){
    int count=0;
    vector<bool> v(n+1,true);   //all elements set as true
    v[0]=v[1]=false;
    for (int i=2;i<n;i++){
        if(v[i]){
            count++;
            for (int j=2*i;j<=n;j=j+i){
                v[j]=false;
            }
        }
    }
    cout<<count;
}
////count no. of prime in range(0,n)

//GCD       gcd(a,b)=gcd(a-b,b)=gcd(a%b,b)       do a-b or b-a until 0 there       ex: gcd(72,24)=gcd(48,24)=gcd(24,24)=gcd(0,24)=24   gcd(30,7)=gcd(23,7)=gcd(16,7)=gcd(9,7)=gcd(2,7)=gcd(2,5)=gcd(2,3)=gcd(0,1)=1

//LCM                  Lcm(a,b)*GCD(a,b)= a*b

void GCD(int a,int b){
    while (true){
    if(a==0){
        cout<<"Gcd: "<<b;
        break;
    }
    else if (b==0){
        cout<<"Gcd: "<<a;
        break;
    }
    else if(a>b){
        a=a-b;
    }
    else if(b>=a){
        b=b-a;
    }

    }
}

//moduli % ((a%m)+(b%m))%m  =  (a+b)%m
//((a%m)−(b%m))%m  =  (a−b)%m
//(a%m)⋅(b%m)%m  =  (a⋅b)%m

//while subtraction if  ans -ve  21-18=3   by moduli 10==> 1-8=-7==>10+(-7)=3,,, add MOD to it

//to find x^n we use x*x*x....ntimes O(n)
//but use x^n=(x^n/2)^2   if even, x^n=(x^n/2)^2*x if odd this method O(logn)

//to find (x^n)%m

//note div by 2 ===> x/2= x>>1

int fast_exponent(int x,int n,int m){
    int res=1;
    while(n>0){
        if(n%1){
            //odd
            res=(1LL*(res)%m*(x)%m)%m;            ///1LL =long long so don't overflow
        }
        
        x=(1LL*(x)%m*(x)%m)%m;
        n>>1;  // n/2
    }
    return res;
}

void factorial_moduli(int n,int m){
    int fac=1;
    for(int i=1;i<=n;i++){

        fac=((fac)*(i))%m;
    }
    cout<<endl<<fac;
}

//// pigeon hole:  https://www.geeksforgeeks.org/discrete-mathematics-the-pigeonhole-principle

//https://www.youtube.com/watch?v=2-mxYrCNX60



//catalan number   https://www.geeksforgeeks.org/program-nth-catalan-number/
















int main(){

    // //prime
    // int count=0;
    // for(int i=0;i<=1;i++){
    //     if (isprime(i)){
    //         count++;
    //     }
    // }
    // cout<<count;
    // count_prime_sieve(10);


    //Gcd
    GCD(72,5);
    factorial_moduli(212,10^9+7);
}

            


