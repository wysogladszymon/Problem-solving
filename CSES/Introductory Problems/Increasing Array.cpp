#include <iostream>

typedef long long ll;

void f(ll *array, int size)
{
    ll moves = 0;
    ll a = 0;
    for (ll i = 0; i < size - 1; ++i)
    {
        a = array[i] - array[i + 1];
        if (a > 0)
        {
            moves += a;
            array[i + 1] += a;
        }
    }
    std::cout << moves;
}

int main()
{
    int size;
    std::cin >> size;
    ll array[size];
    for (int i = 0; i < size; ++i)
        std::cin >> array[i];

    f(array, size);
}