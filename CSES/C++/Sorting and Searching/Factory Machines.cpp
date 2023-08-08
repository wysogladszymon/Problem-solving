#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;

ll products(ll time, vector<ll> v)
{
    ll result = 0;
    for(auto it : v)
    {
        result += time / it ;
        if(result > 1e17)
            return 1e18;
    }
    return result;
}

ll binary_search(vector<ll> v, ll searching, ll begin = 0, ll end = 1e18)
{
    ll mid = (begin + end) / 2;
    ll p = products(mid, v); 
    ll p2 = products(mid - 1, v);
    if (p >= searching && p2 < searching)
        return mid;
    else 
    {
        if (p < searching)
            return binary_search(v, searching, mid + 1, end);
        else
            return binary_search(v, searching, begin, mid);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    ll k, t;
    cin >> n >> t;
    vector<ll> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> k;
        v.push_back(k);
    }

    cout << binary_search(v, t);
}