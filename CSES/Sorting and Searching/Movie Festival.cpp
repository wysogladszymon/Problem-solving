#include <bits/stdc++.h>
 
typedef long long ll;
 
 
int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int n, a,b, end = 0, sum = 0;
    std::cin >> n;
    
    std::vector<std::array<int,2>> v;
    for (int i = 0; i < n;++i)
    {
        std::cin >> a >>b;
        v.push_back({b,a});
    }
    std::sort(v.begin() , v.end());
    
    for (auto x : v)
    {
        if(x[1] >= end)
        {
            sum++;
            end = x[0];
        }
    }
    
    std::cout <<sum;
    
}