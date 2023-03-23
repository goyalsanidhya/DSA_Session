#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        x ^= v[i];
    }
    if(x)
        cout << "A is Winner";
    else
        cout << "B is Winner";
    return 0;
}