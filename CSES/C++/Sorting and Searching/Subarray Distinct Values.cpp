#include <bits/stdc++.h>
 
typedef long long ll;
#define SIZE 1e9
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int k, n, begin = 0, distinct = 0;
    cin >> n >> k;
    ll x, counter = 0;
    vector<ll> v;
    map<ll, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
        mp[x]++;
        if(mp[x] == 1)
            distinct++;
        
        while(distinct > k)
        {
            mp[v[begin]]--;
            if(mp[v[begin]] == 0)
                distinct--;
            begin++;
        }
        counter += (i - begin + 1);
    }
    cout << counter;
}