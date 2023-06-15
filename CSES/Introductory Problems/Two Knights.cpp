#include <iostream>

typedef long long ll;
ll knight(ll n)
{
    if(n == 1)
        return 0;
    if ( n ==2)
        return 6;
    if (n==3)
        return 28;
    if (n == 4)
        return 96;

    return (n*n*(n*n - 1) - (4*2+8*3 + (n-4)*16 + 4*4+6*(n-4)*4+(n-4)*(n-4)*8))/2;
}
int main()
{
    ll sum;
    std::cin >> sum;
    for (ll i = 1; i <= sum; ++i)
        std::cout << knight(i) << std::endl;
}