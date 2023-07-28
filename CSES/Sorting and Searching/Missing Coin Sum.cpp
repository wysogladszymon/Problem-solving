#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int n;
    ll x;
    
    std::vector<ll> v;
    std::cin >> n;
    for (int i = 0; i < n ; ++i)
    {
        std::cin >> x;
        v.push_back(x); 
    }
    std::sort(v.begin(), v.end());
    ll max = v[0];
    if (max > 1)
    {
        std::cout << 1;
        return 0;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if(max + 1 < v[i])
            {
                std::cout << max + 1;
                return 0;
            }
            max += v[i];
        }
        std::cout << max + 1;
    }
}