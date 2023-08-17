#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll x, a;
    int n;
    cin >> n >> x;
    vector<ll> v;
    unordered_map<ll, array<int, 2>> m;
    for (int i = 0; i < n;++i)
    {
        cin >> a;
        v.push_back(a);
    }
    m.insert(make_pair(v[0] + v[1], array<int, 2>{1, 2}));

    for (int i = 2; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            auto s = m.find(x - v[i] - v[j]);
            if(s != m.end())
            {
                cout << ((*s).second)[0] <<" " <<((*s).second)[1] <<" " << i + 1<<" " <<j + 1;
                return 0;
            }
        }
        for (int j = 0; j < i; ++j)
        {
            m.insert(make_pair(v[j] + v[i], array<int, 2> {i + 1, j + 1}));
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}