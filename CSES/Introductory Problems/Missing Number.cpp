#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


int main()
{

    long long amount, a, sum = 0;
    std::cin >> amount;
    std::vector<long long> v;
    for (long long i = 0; i < amount - 1; i++)
    {
        std::cin >> a;
        sum += i + 1 - a;
    }
    sum += amount;
    std::cout << sum;
}