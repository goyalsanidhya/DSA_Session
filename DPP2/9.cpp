#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int32_t main()
{
    string a, b;
    cin >> a >> b;
    int m = b.size(), n = a.size();
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int j = m, i = n;
    string v = "";
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            v.push_back(a[i - 1]);
            i--; 
            j--;
        }
        else
        {
            if (dp[i - 1][j] < dp[i][j - 1])
                j--;
            else
                i--;
        }
    }
    reverse(v.begin(), v.end());
    cout << v << endl;
}