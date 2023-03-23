#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        x ^= v[i];
    }
    int temp = x, bit = 0, pos = 0;
    while(bit != 1)
    {
        bit = x & 1;
        pos++;
        x >>= 1;
    }
    int x1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(setBit(v[i], (pos - 1)))
            x1 ^= v[i];
    }
    cout << x1 << endl;
    cout << (temp ^ x1) << endl;
    return 0;
}