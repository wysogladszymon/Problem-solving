// https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>

using namespace std;
#define ll long long

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    int n = min(word1.length(), word2.length());

    string res = "";
    for (int i = 0 ; i < n; i++){
      res += word1[i];
      res += word2[i];
    }
    string t;
    if (word1.length() > word2.length()){
      t = word1;
    }
    else{
      t = word2;
    }
    for (int i = n; i < t.length(); ++i){
      res += t[i];
    }
    return res;
  }
};

