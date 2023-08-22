#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;

int subarrays(vector<ll> v, ll val)
{
    int k = 1;
    ll sum = 0;
    for(auto a : v)
    {
        if(sum + a > val)
        {
            sum = 0;
            k++;
        }
        sum += a;
    }
    return k;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k;
    ll x, left = 0, right = 2e14, mid;
    vector<ll> v;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
        left = max(x, left);
    }
    
    while ( left <= right)
    {
        mid = (left + right) / 2;
        int subs = subarrays(v, mid); 
        int prev = subarrays(v, mid - 1);
        if( subs <= k && prev > k)
        {
            cout << mid;
            return 0;
        }
        if (subs > k)
            left = mid + 1;
        else
        {
            right = mid - 1;
        }
    }
    cout << mid;
}