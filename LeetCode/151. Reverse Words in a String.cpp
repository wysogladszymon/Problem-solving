//https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>

using namespace std;
#define ll long long

class Solution {
public:
  string reverseWords(string s) {
    int n = s.length();

    string ans = "";
    string curr = "";
    bool space = false;
    for (int i = n - 1; i >=0; --i){
      space = false;
      if (s[i] == ' '){
        space = true;
      }
      while (i > 0 && s[i] == ' '){
        --i;
      }
      if (space && curr.length() >0){
        ans = ans + curr;
        if (s[i] != ' ')
          ans += " ";
        curr = s[i];
        continue;
      }
      curr = s[i] + curr;
    }
    if (curr.length() >0 && curr != " ")
      ans += curr;
    return ans;
  }
};