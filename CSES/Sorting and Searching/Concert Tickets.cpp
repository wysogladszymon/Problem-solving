#include <bits/stdc++.h>

typedef long long ll;

int binary(int x, std::vector<int> v)
{
    int l = 0, p = v.size(), m;
    while(l < p)
    {
        m = (l + p) / 2;
        if(x == v[m])
            return m;
        if(x < v[m])
        {
            p = m;
        }
        
    }
}

int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    int n, m, k;
    std::cin >> n >> m;
    std::vector<int> tickets, people;

    for (int i = 0; i < n; i++)
    {
        std::cin >> k;
        tickets.push_back(k);
    }
    std::sort(tickets.begin(), tickets.end());

    for (int i = 0; i < m; i++)
    {
        std::cin >> k;
        people.push_back(k);
    }
}