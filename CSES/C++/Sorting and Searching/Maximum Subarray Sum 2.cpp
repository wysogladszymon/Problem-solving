#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, a, b, x;
    ll sum = 0, ans = -1e18;
    vector<ll> v;
    multiset<ll> s;
    cin >> n >> a >> b;
    v.push_back(ll(0));
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        sum += ll(x);
        v.push_back(sum);
    }
    if( n == 1)
    {
        cout << v[1];
        return 0;
    }
    for (int i = a; i <= n; ++i)
    {
        s.insert(v[i - a]);
        ans = max(v[i] - *s.begin(), ans);
        if(i >= b)
            s.erase(s.find(v[i - b]));
    }
    cout << ans;
}