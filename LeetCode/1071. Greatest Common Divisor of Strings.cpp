// https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>

using namespace std;
#define ll long long

class Solution {
public:
  string gcdOfStrings(string str1, string str2) {
    if (str1.length() > str2.length()){
      string t = str1;
      str1 = str2;
      str2 = t;
    }
    // str1 is the smaller one
    string ans = "";
    int n = str1.length();
    int m = str2.length();
    string curr = "";
    string a, b;
    for (int i = 0 ; i < n; ++i){
      curr += str1[i];
      // if length of a substring isnt divider of our substring lengths
      if (m % (i+1) != 0 || n % (i+1) != 0)
        continue;
      a = "";
      b = "";
      for (int j = 0 ; j < int(n / (i+1)); ++j){
        a += curr;
      }
      if (a != str1)
        continue;
      for (int j = 0 ; j < int (m / (i+1)); ++j){
        b += curr;
      }
      if (b == str2)
        ans = curr;
    }
    return ans;
  }
};


int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  
}