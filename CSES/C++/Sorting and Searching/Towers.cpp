#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    ll a;
    int n;
    std::multiset<ll> v;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a;
        if(i == 0)
        {
            v.insert(a);
            continue;
        }
        else
        {
            auto it = v.upper_bound(a); 
            if(it == v.end()) 
            {
                v.insert(a);
                continue;
            }
            else  
            {
                v.erase(v.find(*it));
                v.insert(a);
            }
        }
    }
    std::cout << v.size();
}