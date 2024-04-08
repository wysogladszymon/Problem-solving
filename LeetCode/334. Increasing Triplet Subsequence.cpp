//https://leetcode.com/problems/increasing-triplet-subsequence/description/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>
#include <limits>
using namespace std;


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min;
        int mid = numeric_limits<int>::max();
        min = nums[0];
        for (int i = 0; i < nums.size(); ++i){
            if( nums[i] < min){
                min = nums[i];
            }
            if (nums[i] > min && nums[i] < mid){
                mid = nums[i];
            }
            if (nums[i] > mid){
                return true;
            }
            // cout << "\ni:" << i << "\nmin: " << min << "\nmid: " << mid << "\ncurr: " << nums[i] << endl;
        }
        return false;
    }
};

int main(){
    vector<int> v = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100000000};
    Solution s;
    s.increasingTriplet(v);
}