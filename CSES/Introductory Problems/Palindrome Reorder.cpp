#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

//65 - 90 ASCII
typedef long long ll;


void palindrom (std::string word)
{
    std::vector<ll> v(26);
    ll size = word.size();
    std::string out = word;
    ll place = 0;

    for(char elem : word)
        v[int(elem) - 65]++;

    if (size%2 ==0)
    {
        for (int i = 0; i < 26; i++)
        {
            if (v[i] % 2 != 0)
            {
                std::cout << "NO SOLUTION";
                return;
            }
            for (int j = 0; j < v[i] / 2; j++)
            {
                out[place] = char(i + 65);
                out[size - place - 1] = char(i + 65);
                place++;
            }

        }
    }
    if (size%2 == 1)
    {
        int k = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v[i] % 2 != 0)
            {
                k++;
                out[(size-1) / 2] = char(i + 65);
            }
            if(k ==2)
            {
                std::cout << "NO SOLUTION";
                return;
            } 
            for (int j = 0; j < v[i] / 2; j++)
            {
                out[place] = char(i + 65);
                out[size - place - 1] = char(i + 65);
                place++;
            }

        }
    }
    std::cout << out;
}

int main()
{
    std::string word;
    std::cin >> word;
    palindrom(word);
    return 0;
}