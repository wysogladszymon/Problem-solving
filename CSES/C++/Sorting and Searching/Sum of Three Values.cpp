#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll x, a;
    int n, k, j;
    cin >> n >> x;
    vector<pair<ll , int>> v;
    for (int i = 1; i <= n;++i)
    {
        cin >> a;
        v.push_back(make_pair(a, i));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; ++i)
    {
        k = n - 1;
        j = i + 1;
        while ( j < k)
        {
            if (v[i].first + v[j].first + v[k].first == x)
            {
                cout << v[i].second << " " << v[j].second << " " << v[k].second;
                return 0;
            }
            else if ((v[i].first + v[j].first + v[k].first) < x)
                j++;
            else
                k--;  
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}