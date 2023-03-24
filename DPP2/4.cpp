#include <bits/stdc++.h>
using namespace std;

bool isomorphic(string s, string t)
{
    map<int, int> mp1, mp2;
    for (int i = 0; i < s.size(); i++)
    {
        if(mp1.count(s[i]))
        {
            if(mp1[s[i]] != t[i])
                return false;
        }
        else
        {
            if(mp2.count(t[i]))
                return false;
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
    }
    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;
    if (isomorphic(s, t))
        cout << "Isomorphic" << endl;
    else
        cout << "Not Isomorphic" << endl;
    return 0;
}