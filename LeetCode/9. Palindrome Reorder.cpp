//https://leetcode.com/problems/palindrome-number/

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;
typedef long long ll;

class Solution {
public:
    bool isPalindrome(ll x) {
        if (x < 0)
            return 0;
        if (x == 0)
            return 1;
        int size = int(log10(x)) + 1;
        ll y = x;
        ll a = 0;
        for (int i = 0 ; i < size; i++){
            a = 10 * a + y % 10;
            y = y/10;
        }
        return x == a;
    }
};

int main(){
    Solution s;

    cout << s.isPalindrome(15512);
    return 0;

}