#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


typedef long long ll;
void grey(int n)
{
    int size = 1;
    for (int i = 1; i <= n; ++i)
        size *= 2;

    std::vector<std::string> v;
    for (int i = 0; i < size;++i)
        v.push_back(" ");

    int power = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < power/2 ; j++)
        {
            v[power - 1 - j] = '1' + v[j];
            v[j] = '0' + v[j];
        }
        power = power * 2;
    }
    for(auto elem : v)
        std::cout << elem << std::endl;
}


int main()
{
    int n;
    std::cin >> n;
    grey(n);
}