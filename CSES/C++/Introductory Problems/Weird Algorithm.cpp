#include <iostream>

void f(long long n)
{
    while(n > 1 )
    {
        std::cout << n <<" ";
        if( (n & 1) == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    std::cout << n <<" ";
}

int main()
{
    long long a;
    std::cin >> a;
    f(a);
}