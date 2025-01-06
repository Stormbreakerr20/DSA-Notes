#include <bits/stdc++.h>
using namespace std;

#define int long long

bool dfs(int cur, vector<int> &seen, vector<int> can[], vector<int> job[], vector<int> &match, int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (seen[i])
            continue;

        int flag = 1;

        for (int j = 0; j < k; j++)
            if (can[cur][j] != job[i][j] && job[i][j])
                flag = 0;

        if (flag)
        {
            seen[i] = 1;
            if (match[i] == -1 || dfs(match[i], seen, can, job, match, n, k))
            {
                match[i] = cur;
                return true;
            }
        }
    }

    return false;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, ab; j < k; j++)
        {
            cin >> ab;
            v[i].push_back(ab);
        }
    }

    vector<int> can[m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0, ab; j < k; j++)
        {
            cin >> ab;
            can[i].push_back(ab);
        }
    }

    vector<int> profit(n);

    for (int i = 0; i < n; i++)
        cin >> profit[i];

    vector<int> match(n, -1);

    for (int i = 0; i < m; i++)
    {
        vector<int> seen(n);
        dfs(i, seen, can, v, match, n, k);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        if (match[i] != -1)
            ans += profit[i];

    cout << ans << "\n";
}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt = 1;
    // cin >> tt;

    while (tt--)
        solve();
}