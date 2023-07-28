#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int n,k;
    std::cin >> n;
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> k;
        v.push_back(k);
    }
    std::sort(v.begin(), v.end());
    k = 1;
    int counter = 0;

    for (int i = 0; i < n; i += k)
    {
        k = 1;
        while(v[i] == v[i+k])
            k++;
        counter++;
    }
    std::cout << counter;
} 