#include <iostream>

typedef unsigned long long ll;


ll spiral(ll y, ll x)
{
    ll out = 0;
    if (y > x)
    {
        if ( y%2 == 0)
            out = y  - x + (y-1)* y + 1;
        else
            out = (y-1) * (y - 1) + x;
    }
    else if (y == x)
    {
        out = x * (x-1)+ 1;
    }
    else
    {
        if(x%2 == 0)
            out = (x-1) * (x-1) + y;
        else
            out = x - y + (x-1)* x  + 1;
    }
    return out;
}

int main()
{
    ll amount, x, y;
    std::cin >> amount;
    for (ll i = 0; i < amount; ++i)
    {
        std::cin >> x >> y;
        std::cout << spiral(x, y)<<std::endl;
    }
}

