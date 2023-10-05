// Trick
//  Try To write as in terms of index
// DO all possible thing on that index acc to problem
//  if count all ways : Sum up all stuffs
// If min: take min of all stuffs same for Max

// https://bit.ly/3JPcoOx
#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

int f(int arr[],int n){
    // rec Relation
    // base
    if(n == 0) return 0;

    //if frog jump 1 back from n;
    int left = f(arr,n-1) + abs(arr[n] - arr[n-1]); // total energy req
    //if frog jump 2 back from n;
    int right= f(arr,n-2) + abs(arr[n] - arr[n-1]); // total energy req
    
    // We want min of both possibilties
    return min(left , right);
}

// since rec we can merge overlapping subproblems:: Memoization

int f(int arr[],int n,vector<int> &dp){
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];

    int left = f(arr,n-1) + abs(arr[n] - arr[n-1]);

    int right= n>1?f(arr,n-2) + abs(arr[n] - arr[n-1]):INT_MAX; 
    
    // We want min of both possibilties
    return dp[n] = min(left , right);
}






// Climbing Stairs:  https://bit.ly/3t1Sjyx

// https://atcoder.jp/contests/dp/tasks/dp_b :: Frog allowed to jump K steps

int main()
{
    ll n = nxt(),k = nxt();
    vector<int> v(n);
    for(int i = 0;i<n;i++) v[i] = nxt();

    vector<int> dp(n+1,-1);
    dp[0] = 0;

    for(ll i=1;i<n;i++){
        int curr = INT_MAX;
        for(int j = i-1;j >= max(i-k,0ll) ;j--){
            curr = min(dp[j] + abs(v[i] - v[j]) , curr);
        }
        dp[i] = curr;
    }

    cout<<dp[n-1];
}


// DP On Subsequences

//  https://bit.ly/3q5rlUY 
// Tabulation
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    vector<int> dp(n+1,-1);

    dp[0] = nums[0];
    for(int i =1;i<n;i++){
        int pick = nums[i];
        if(i>1) pick += dp[i-2];
        int notpick = dp[i-1];

        dp[i] = max(pick,notpick);
    }

    return dp[n-1];

}
// Space Optimized
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    vector<int> dp(n+1,-1);
    int p1 = 0,p2 = 0;
    
    for(int i =0;i<n;i++){
        int pick = nums[i];
        if(i>1) pick += p2;
        int notpick = p1;

        int curr = max(pick,notpick);
        p2 = p1;
        p1 = curr;
    }

    return p1;

}















