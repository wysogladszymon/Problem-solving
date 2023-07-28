#include <bits/stdc++.h>

typedef long long ll;
void swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}

int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int n, m, a, b, p, q;
    std::vector<std::array<int, 2>> v;
    std::vector<int> w;
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a;
        v.push_back(std::array<int, 2>{a, i});
        w.push_back(a);
    }
    std::sort(v.begin(), v.end());
    int ans = 1;
    for (int j = 1; j < n; ++j)
    {
        if(v[j][1] < v[j - 1][1])
            ans++;
    }
    
    for (int i = 0; i < m; ++i)
    {
        std::cin >> a >> b;
        a--; b--; 
        
        if(a == b)
        {
            std::cout << ans << std::endl;
            continue;
        }
        if(w[a] > w[b])
            swap(a, b);
        p = w[a]; q = w[b];
        if(p - q == 1 || q - p == 1)
        {
            if(a > v[p-2][1] && p > 1)
                ans++;
            if(b > a)
                ans++;
            else
                ans--;
            if(b < v[q][1] && q < n)
                ans++;
            if(b > v[p-2][1] && p > 1)
                ans--;
            if(a < v[q][1] && q < n)
                ans--;
            swap(w[a], w[b]);
            swap(v[w[a] - 1][1], v[w[b] - 1][1]);
        }
        else
        {
            if(a > v[p-2][1] && p > 1)
                ans++;
            if(a < v[p][1] && p < n)
                ans++;
            if(b < v[q][1] && q < n)
                ans++;
            if (b > v[q - 2][1] && q > 1)
                ans++;
            if(b > v[p-2][1] && p > 1)
                ans--;
            if(b < v[p][1] && p < n)
                ans--;
            if(a < v[q][1] && q < n)
                ans--;
            if (a > v[q - 2][1] && q > 1)
                ans--;
            swap(w[a], w[b]);
            swap(v[w[a] - 1][1], v[w[b] - 1][1]);
        }

        std::cout << ans << std::endl;
        
    }
}