#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

typedef long long ll;

void sets(ll n)
{
    if(n%4 == 1 || n%4 == 2)
    {
        std::cout << "NO";
        return;
    }
    else 
    {
        std::cout << "YES" << std::endl;
        if(n %2 == 0) //gdy parzysta
        {
            std::cout << n / 2<<std::endl;
            for (int i = 1; i < n; i+=4)
            {
                std::cout << i << " " << i + 3 << " ";
            }
            std::cout << "\n" << n / 2 << std::endl;
            for (int i = 1; i < n; i+=4)
            {
                std::cout << i + 1 << " " << i + 2 << " ";
            }
        }
        else
        {
        std::cout << n / 2 + 1<<"\n1 2 ";
            for (int i = 4; i < n; i+=4)
            {
                std::cout << i << " " << i + 3 << " ";
            }
            std::cout << "\n" << n / 2 << "\n3 ";
            for (int i = 4; i < n; i+=4)
            {
                std::cout << i + 1 << " " << i + 2 << " ";
            }
        }
    }
        

}


int main()
{
    int in;
    std::cin >> in;
    sets(in);
}