//  https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <vector>
#include <algorithm>
#include <iostream>
#include <array>
#include <string>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //32 - 126
        int n = s.size();
        int max = 0;
        bool letters[95] = {false};
        int j = 0;
        for (int i = 0 ; i < n; i++){
            if (letters[int(s[i]) - 32] == true){
                while (letters[int(s[i]) - 32] == true){
                    letters[int(s[j]) - 32] = false;
                    j++;
                }
            }
            letters[int(s[i]) - 32] = true;
            if (i - j + 1 > max)
                max = i - j + 1;
        }
        return max;
    }
};


int main(){
    Solution s;
    string m = "aaaaabcdefghjsdhusdhfbsoqiwd";

    cout << s.lengthOfLongestSubstring(m);
}