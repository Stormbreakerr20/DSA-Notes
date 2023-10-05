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


//  https://bit.ly/3F4yl8z

// Rec will be like from n-1 to 0 also f(n-1,k) ==> for n-1 we find max possible task given on last day kth task was done
// k belong to 0,1,2 as three task 
int frec( vector<vector<int>> store,int n,int k ){
    int ans = 0;
    if(n==0){
        for(int i = 0;i<3;i++){
            if(i != k){
                ans = max(ans,store[0][i]);
            }
        }

        return ans;
    }

    for(int i = 0;i<3;i++){
        if(i!=k){
            int points = store[n][i] + frec(store,n-1,i);
            ans  = max(ans , points);
        }
    }

    return ans;
}
// Tabulation
int ninjaTraining(int n, vector<vector<int>> &p)
{
    vector<vector<int>> dp(n,vector<int>(4,-1));

    dp[0][0] = max(p[0][1],p[0][2]);
    dp[0][1] = max(p[0][0],p[0][2]);
    dp[0][2] = max(p[0][1],p[0][0]);
    dp[0][3] = max(p[0][1],max(p[0][2],p[0][0]));

    for(int day = 1;day<n;day++){
        for(int last = 0;last<4;last++){
            dp[day][last] = 0;
            for(int i = 0;i<3;i++){
                if(i != last) {
                    dp[day][last] = max(p[day][i] + dp[day-1][i] ,dp[day][last]);
                } 
            }
        }
    }

    return dp[n-1][3];
}
// Better : we dont need entire 2d
int ninjaTraining(int n, vector<vector<int>> &p)
{
    vector<int> dp(4,0);

    dp[0] = max(p[0][1],p[0][2]);
    dp[1] = max(p[0][0],p[0][2]);
    dp[2] = max(p[0][1],p[0][0]);
    dp[3] = max(p[0][1],max(p[0][2],p[0][0]));

    for(int day = 1;day<n;day++){
        vector<int> temp(4,0);
        for(int last = 0;last<4;last++){
            temp[last] = 0;
            for(int i = 0;i<3;i++){
                if(i != last) {
                    temp[last] = max(p[day][i] + dp[i] ,temp[last]);
                } 
            }
        }
        dp = temp;
    }

    return dp[3];
}














