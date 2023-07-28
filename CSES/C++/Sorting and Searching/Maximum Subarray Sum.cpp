#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

typedef long long ll;
 

 
int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    int n;
    ll ans = 0, sum = 0;

    std::cin >> n;
    ll a;
    std::cin >> a;
    ans = a;
    sum = a;

    for (int i = 1; i < n; i++)
    {
        std::cin >> a;
        sum += a;
        if(sum < a)
        {
            sum = a;
        }
        ans = std::max(ans, sum);
    }
    std::cout << ans;
}