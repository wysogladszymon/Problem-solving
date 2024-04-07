// https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> a(n, 1);
    // prefixes on index i is product of all elements before i
    for (int i = n - 2; i >= 0; i--)
    {
      a[i] = nums[i + 1] * a[i + 1];
    }
    int b = 1;
    // sufixes, on index i is product of all elements after i
    for (int j = 1; j < n; j++)
    {
      b *= nums[j - 1];
      a[j] *= b;
    }
    return a;
  }
};