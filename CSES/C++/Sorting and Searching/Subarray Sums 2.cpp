#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    ll x, a, sum = 0, counter = 0;
    vector<ll> v;
    map<ll, int> mp;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        v.push_back(a);
    }
    mp.insert(make_pair(0,1));
    for (int i = 0; i < n; ++i)
    {
        sum += v[i];
        auto it = mp.find(sum - x);
        if(it != mp.end())
            counter += (*it).second;
        if(mp.find(sum) == mp.end())
            mp.insert(make_pair(sum,1));
        else
            mp[sum]++;
    }

    cout << counter;
}