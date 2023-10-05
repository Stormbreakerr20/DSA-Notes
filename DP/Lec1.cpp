// Memoization : we tend to store values of subproblems
// Like during rec tree if f(2) done then we store it so we don't need to make further tree for some other f(2) call
// Storing Done via array indexing 

// declare dp[n+1] array
// ex if fibonacci : fn = fn-1 + fn-2

// step 1 : dp[n] = fn-1 + fn-2
//  if dp[n] != -1 return dp[n]

// Recursion -> DP

// To set in array : dp[n] : memset(dp,-1,sizeof dp)

#include<bits/stdc++.h>
using namespace std;


int f(int n,vector<int> & dp){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n] = f(n-1,dp) + f(n-2,dp);
}


int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);

    cout<<f(n,dp);

}

// Rec(Top to Bottom) to Tabulation: Bottom to Top: Base Case To requires ans

// For above:
int f(int n,vector<int> & dp){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n] = f(n-1,dp) + f(n-2,dp);
}


int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);

    // SC for rec: was O(n) + rec space O(n)
    // For Tabulation: O(n) only

    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    // To remove eXtra space
    int prev = 0;
    int prev1 = 1;

    for(int i = 2;i<=n;i++){
        int curr = prev + prev1;
        prev = prev1;
        prev1 = curr;
    }
    cout<<prev1<<endl;

}