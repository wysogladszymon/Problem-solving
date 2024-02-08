//https://leetcode.com/problems/roman-to-integer/

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <array>
#include <vector>
#include <map>

using namespace std;
typedef long long ll;

map<char,short> myData = {{'I', 1},{'V', 5},{'X',10},{'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};


class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        short prev = myData[s[size - 1]];
        int x = int(prev);
        short curr;
        for (int i = 1; i < size; i++){
            curr = myData[s[size - i - 1]];
            if (prev <= curr)
                x += int(curr);
            else    
                x -= int(curr);
            prev = curr;
        }
        return x;
    }
};

int main(){
    Solution s;
    cout << s.romanToInt("XIX");
    return 0;
}