#include <iostream>
#include <string>
#include <algorithm>
typedef long long ll;

void f(std::string word)
{
    ll streak = 1;
    ll k = 1;
    for (ll i = 0; i < word.size() ; i = i + k)
    {
        k = 1;
        while (word[i] == word[i+k])
        {
            k++;
            streak = std::max(streak, k);
        }
    }
    std::cout << streak;
}

int main()
{
    std::string word;
    std::cin >> word;
    f(word);
}
