#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n / 2); j++)
            swap(a[j][i], a[n - j - i][i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}