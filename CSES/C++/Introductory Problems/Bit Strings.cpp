#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

typedef long long ll;
#define modulo 1000000007;


ll f(ll n)
{
    ll out = 1;
    for (int i = 1; i <= n; i++)
    {
        out = (out * 2)%modulo;
    }
    return out % modulo;
}


int main()
{
    int in;
    std::cin >> in;
    std::cout << f(in);
}