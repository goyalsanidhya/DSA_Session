#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < (1 << n); i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[j] << " ";
    }
    cout << endl;
    return 0;
}