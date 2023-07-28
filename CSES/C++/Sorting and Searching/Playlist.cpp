#include <bits/stdc++.h>

typedef long long ll;
const int SIZE = 1e9;

int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    std::vector<bool> arr(SIZE);
    int n, tail = 0, ans = 0, len = 0;
    ll a;
    std::cin >> n;
    std::vector<ll> v;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a;
        v.push_back(a);
    }
    
    for (int head = 0; head < n; ++head)
    {
        if(arr[v[head]] == 0) 
        {
            len = head - tail +1 ;
            arr[v[head]] = 1; 
            ans = std::max(len, ans);
            continue;
        }
        else
        {
            while (arr[v[head]] == 1)
            {
                
                arr[v[tail]] = 0;
                tail++;
            }
            arr[v[tail]] = 1;
            arr[v[head]] = 1;
        }
    }
    std::cout << ans;
}