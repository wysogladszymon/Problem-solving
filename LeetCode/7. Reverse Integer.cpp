// https://leetcode.com/problems/reverse-integer/

#include <vector>
#include <algorithm>
#include <iostream>
#include <array>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long max = -2147483648;
        bool rev = x < 0;
        if (rev && x > max)
            x = x * (-1);
        else if (x == 0 or x == max)
            return 0;

        int size = log10(x) + 1;
        int res = 0;
        for (int i = 0 ; i < size; i++){
            if (res > max * (-0.1))
                return 0; 
            res = 10* res + (x % 10);
            x = x / 10;
        }
        if (rev)
            return (-1) * res;
        else 
            return res;
    }
};

int main(){
    Solution s;
    int m = -2147483648;

    cout << m << "reverse: " << s.reverse(m);
}