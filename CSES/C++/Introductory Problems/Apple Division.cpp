#include <bits/stdc++.h>

typedef long long ll;

int n;
std::vector<ll> subset;
std::vector<ll> data;
ll out ;
ll vsum = 0;

ll min(ll x1, ll x2)
{
    if(x1 < x2)
        return x1;
    else
        return x2;
}

void search(ll k = 0)
{
    if ( k == n)
    {
        ll sum = std::accumulate(subset.begin(), subset.end(), 0LL);
        out = min(out, std::abs(vsum - 2*sum));
        return;
    }
    search(k + 1);
    subset.push_back(data[k]);
    search(k + 1);
    subset.pop_back();
}

int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a;
        std::cin >> a;
        data.push_back(a);
    }

    vsum = std::accumulate(data.begin(), data.end(), 0LL);
    out = vsum;
    search(0);
    std::cout << out;
}