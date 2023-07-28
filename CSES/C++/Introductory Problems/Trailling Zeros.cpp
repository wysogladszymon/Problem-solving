#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

typedef long long ll;



ll f(ll n)
{
    ll out = 0;
    ll i ;
    for (i = 5; i <= n; i = i*5)
    {
        out += n / i;
    }
    return out;
}


int main()
{
    int in;
    std::cin >> in;
    std::cout << f(in);
}