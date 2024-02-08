//https://leetcode.com/problems/two-sum/

#include <vector>
#include <algorithm>
#include <iostream>
#include <array>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {-1,-1};
        vector<int> sorted(nums.begin(), nums.end()); // copy of nums
        sort(sorted.begin(), sorted.end());
        auto it = sorted.begin();
        auto found = sorted.begin();
        for (it ; it != sorted.end(); it++){
            found = lower_bound(it + 1, sorted.end(),target - *it);
            if (found != sorted.end() && *it + *found == target){
                break;
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if (result[0] < 0 && *it + nums[i] == target){
                result[0] = i;
                continue;
            }
            if (result[1] < 0 && *found + nums[i] == target)
                result[1] = i;
        }
        return result;
    }
};


int main(){
    Solution s;
    vector<int> v = {1,6142,8192,10239};
    int target = 18431;

    vector<int> result = s.twoSum(v, target);

    cout << result[0] << " " << result[1];
}