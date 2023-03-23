#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> rotate(d);
    for (int i = 0; i < d; i++)
        rotate[i] = v[i];
    for (int i = 0; i < n; i++)
        v[i] = v[(i + d) % n];
    int count = 0;
    for(int i = (n - d); i < n; i++)
        v[i] = rotate[count++];
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}