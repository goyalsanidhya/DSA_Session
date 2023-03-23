#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void setBit(int n, int pos)
{
    n = n | (1 << pos);
}

bool clearBit(int n, int pos)
{
    return ((n & ~(1 << pos)));
}

int clearRightmostBit(int n)
{
    return (n & (n - 1));
}

int only_rightmost_active(int n)
{
    int pos = 0, c = 0;
    while (n != 0)
    {
        if (getBit(n, pos))
            break;
        c++;
        pos++;
    }
    return 1 << c;
}

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    cout << getBit(n, 3) << endl;
    setBit(n, 1);
    cout << n << endl;
    cout << clearBit(n, 1) << endl;
    cout << clearRightmostBit(n) << endl;
    cout << onlyRightmostBitActive(n) << endl;
    return 0;
}