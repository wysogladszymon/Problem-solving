#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    int n, m, k, counter = 0;
    ll x ;

    std::cin >> n >> m >> k;

    std::vector<ll> desires;
    std::vector<ll> flats;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        desires.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> x;
        flats.push_back(x);
    }

    std::sort(desires.begin(), desires.end());
    std::sort(flats.begin(), flats.end());

    int i = 0, j = 0;

    for (i = 0; i < n; i ++)
    {
        while(flats[j] < desires[i] - k && j < m)
            j++;
        if(j == m )
            break;
        if(desires[i] + k >= flats[j] && flats[j] >= desires[i] - k )
        {
            counter++;
            j++;
        }
    }

    std::cout << counter;
}