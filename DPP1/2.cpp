#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int store = v[0];
    for(int i = 0; i < (n - 1); i++)
        v[i] = v[i + 1];
    v[n - 1] = store;
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}