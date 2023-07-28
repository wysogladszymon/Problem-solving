#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

typedef long long ll;



void f(ll x, ll y)
{
    if((x+y)%3==0)
    {
        ll sum = (x + y) / 3; 
        ll n = x - sum; 
        ll k = y - sum; 
        if ( x == 2*n + k && y == 2 * k + n && k>=0 && n>=0)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    else
        std::cout << "NO" << std::endl;
}


int main()
{
    ll in,x,y;
    std::cin >> in;
    for (ll i = 0; i < in; i++)
    {
        std::cin >> x >> y;
        f(x, y);
    }
}