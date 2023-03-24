#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main()
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
    cout << "Insetion = " << m - dp[n][m] << endl;
    cout << "Deletion = " << n - dp[n][m] << endl;
    return 0;
}