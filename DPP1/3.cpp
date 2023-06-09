#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int max_so_far = INT_MIN, max_ending_here = 0,
    start = 0, end = 0, s = 0;
    for (int i = 0; i < n; i++) 
    {
        max_ending_here += v[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout << "Range: " << start << " " << end << endl;
    for(int i = start; i < end; i++)
        cout << v[i] << " ";
    return 0;
}