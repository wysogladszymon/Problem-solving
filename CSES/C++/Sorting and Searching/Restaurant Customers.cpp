#include <bits/stdc++.h>
 
typedef long long ll;
 
 
int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int n, a,b, c = 0, ans = 0;
    std::cin >> n;
    
    std::set<std::array<int,2>> s;
    for (int i = 0; i < n;++i)
    {
        std::cin >> a >>b;
        s.insert({a,1});
        s.insert({b, -1});
    }
    for (auto elem :s)
    {
        c+= elem[1];
        ans = std::max(ans,c);
    }
    std::cout <<ans;
    
}