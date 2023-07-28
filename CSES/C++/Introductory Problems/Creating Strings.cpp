#include <bits/stdc++.h>

typedef long long ll;

std::vector<int> letters(26);
ll n = 0;
std::string out = "";


ll factorial(int n)
{
    ll j = 1;
    for (int i = 1; i <= n; i++)
        j *= i;
    return j;
}

int count(std::string word)
{
    letters.assign(26, 0);
    for (char a : word)
        letters[int(a) - 97]++;
    ll divider = 1;
    for (int a : letters)
    {
        divider = divider * factorial(a);
    }
    return factorial(word.size()) / divider;
}



void permutation()
{
    if(out.size() == n)
    {
        std::cout << out <<std::endl;
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if(letters[i] == 0)
                continue;
            letters[i]--;
            out += char(i+97);
            permutation();
            letters[i]++;
            out.erase(out.size() - 1);
        }
    }
}


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    std::string in;
    std::cin >> in;
    n = in.size();
    std::cout << count(in) << std::endl;

    permutation();
}