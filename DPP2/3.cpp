#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] <= 'o')
            cout << (s[i] - 'a') / 3 + 2 << endl;
        else if (s[i] <= 'v' && s[i] >= 't')
            cout << 8 << endl;
        else if (s[i] >= 'p' && s[i] <= 's')
            cout << 7 << endl;
        else
            cout << 9 << endl;
    return 0;
}