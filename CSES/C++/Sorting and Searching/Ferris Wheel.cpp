#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    std::vector<int> v;
    int n, x, k, pairs;
    std::cin >> n >> x;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> k;
        v.push_back(k);
    }
    std::sort(v.begin(), v.end());

    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        while (v[i] + v[j] > x && i < j)
            j--;
        if(i == j)
            break;
        pairs++;
        j--;
    }
    std::cout << n - pairs;
}