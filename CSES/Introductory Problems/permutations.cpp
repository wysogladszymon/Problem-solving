#include <iostream>

void f(int size)
{
    int a = size - 1;
    int odds = size/2 +1;
    if (size%2 ==0)
    {
        a = size;
        odds = size / 2;
    }
    
    if(a <= 2 && size != 1)
        std::cout << "NO SOLUTION";
    else
    {
        for (int i = 1; i <= size / 2; ++i)
        {
            std::cout << 2 * i << " ";
        }
        for (int i = 0; i < odds; ++i)
        {
            std::cout << 2 * i + 1 << " ";
        }        
    }
}
int main()
{
    int a;
    std::cin >> a;
    f(a);
}
