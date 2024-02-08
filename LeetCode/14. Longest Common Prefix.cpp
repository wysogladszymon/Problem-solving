//https://leetcode.com/problems/longest-common-prefix/

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;
typedef long long ll;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int size = strs.size();
        int i = 0;
        string result = "";
        int minV = min(strs[0].size(), strs[size - 1].size());
        while (strs[0] != "" && strs[0][i] == strs[size - 1][i] && i <  minV){
            result += strs[0][i];
            i++;
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<string> v= {"flowers", "fl", "flaszka"};
    cout << s.longestCommonPrefix(v);
    return 0;
}