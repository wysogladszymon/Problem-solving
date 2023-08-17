#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    ll t, time = 0, big = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        big = max(big, t);
        time += t;
    }
    time = time - big;

    if (time >= big)
        cout << time + big;
    else
        cout << 2 * big;
}