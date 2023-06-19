#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


typedef long long ll;

void pm(int start, int end)
{
    std::cout << start <<" " << end<<std::endl;
}

int a;
int counter = 0;
void count(int n, int start,int end)
{
    counter++;

    if( n == 1)
    {           
        return;
    }
    int help = 6 - (start + end);
    count(n - 1, start, help);
    count(n - 1, help, end );
}
void hanoi(int n, int start, int end, int counter = 0)
{
    if( n == 1)
    {           
        pm(start, end);
        return;
    }
    int help = 6 - (start + end);
    hanoi(n - 1, start, help);
    pm(start, end);
    hanoi(n - 1, help, end );
}


int main()
{
    std::cin >> a;
    count(a, 1, 3);
    std::cout << counter << std::endl;
    hanoi(a, 1, 3);
}