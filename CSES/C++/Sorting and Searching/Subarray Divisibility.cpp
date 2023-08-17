#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    ll a, rest = 0, counter = 0;
    vector<ll> v;
    map<ll, int> mp;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        v.push_back(a);
    }
    mp.insert(make_pair(0,1));
    for (int i = 0; i < n; ++i)
    {
        rest = (((rest + v[i]) % n) + n) % n; 
        
        if(mp.find(rest) != mp.end())
        {
            counter += mp[rest];
            mp[rest]++;
        }
        else
        {
            mp.insert(make_pair(rest, 1));

        }
    }

    cout << counter;
}