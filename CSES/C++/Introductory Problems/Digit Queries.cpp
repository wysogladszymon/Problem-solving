#include <bits/stdc++.h>
 
typedef long long ll;
 
ll tenpower(int n)
{
    if (n == 0)
        return 1;
    ll result = 1;
    for (int i = 0; i < n; i++)
        result *= 10;
    return result;
}
 
void f(ll k)
{
    ll l = 0, r = 0, m, help, digits, w_digit, number;
    
    m = 9;
    digits = 0;
    std::string word = "";
 
    while( k > r)
    {
        digits++;
        l = r;
        r += m * digits;
        m *= 10;
    }
    help = k - l ;
    
    number = (help - 1) / digits + tenpower(digits - 1)  ;
    w_digit = help % digits;
 
    if (w_digit == 0)
        w_digit = digits;
    word = std::to_string(number);
    
    std::cout<< word[w_digit - 1] <<std::endl;
}
 
int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    int q;
    ll k;
    std::cin >> q;
    std::vector<ll> v;
 
    for (int i = 0; i < q; i++)
    {
        std::cin >> k;
        v.push_back(k);
    }
    for (int i = 0; i < q; i++)
        f(v[i]);
 
}