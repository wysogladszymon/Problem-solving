#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    ll time = 0, ans = 0;
    ll duration, deadline;
    vector<array<ll, 2>> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> duration >> deadline; // duration , deadline
        v.push_back(array<ll, 2> {duration, deadline});
    }
    sort(v.begin(), v.end());
    
    for ( auto x : v)
    {
        time += x[0];
        ans = ans - time + x[1];
    }
    cout << ans;
}