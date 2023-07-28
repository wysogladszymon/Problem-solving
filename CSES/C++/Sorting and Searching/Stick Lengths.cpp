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
    ll a,avg = 0,x = 0;
    std::vector<ll> v;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a;
        v.push_back(a);
    }
    std::sort(v.begin(), v.end());
    if(n%2 == 0)
        avg = (v[n / 2 - 1] + v[n / 2]) / 2;
    else
        avg = v[n / 2];
    
    for (int i = 0; i < n; ++i)
        x += std::abs(avg - v[i]);
    std::cout << x;
}