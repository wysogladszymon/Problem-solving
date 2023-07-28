#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int n, m, a;
    std::cin >> n >>m;
    std::multiset<int> s;
    for (int i = 0; i < n;++i)
    {
        std::cin >> a;
        s.insert(a);
    }
    for (int i = 0; i < m; ++i)
    {
        std::cin >> a;
        auto it = s.upper_bound(a);
        if(it == s.begin())
            std::cout << -1 << std::endl;
        else
        {
            --it;
            std::cout << *it << std::endl;
        }
    }
}