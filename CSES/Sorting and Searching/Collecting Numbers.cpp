#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int n, a;
    std::vector<std::array<int, 2>> v;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a;
        v.push_back(std::array<int, 2> {a, i});
    }
    std::sort(v.begin(), v.end());
    int ans = 1;
    for (int i = 1; i < n; ++i)
    {
        if(v[i][1] < v[i - 1][1])
            ans++;
    }
    std::cout << ans;
}