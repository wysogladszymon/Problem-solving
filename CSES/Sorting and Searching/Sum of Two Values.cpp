#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

typedef long long ll;
 
 
int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
        
    int n, x, a;
    std::cin >> n >> x;
    std::vector<std::array<int, 2>> v;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        v.push_back({a, i + 1});
    }
    std::sort(v.begin(), v.end());

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int target = x - v[i][0];
        auto it = std::lower_bound(v.begin() + i + 1, v.end(), std::array<int, 2>{target, 0});
        if (it != v.end() && (*it)[0] == target)
        {
            found = true;
            std::cout << v[i][1] << " " << (*it)[1] << "\n";
            break;
        }
    }

    if (!found)
    {
        std::cout << "IMPOSSIBLE\n";
    }

}