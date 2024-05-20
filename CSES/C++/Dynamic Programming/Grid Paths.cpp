// https://cses.fi/problemset/task/1638

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mx = 1000;
const int MxN = 1000000007;
vector<vector<int>> arr(mx, vector<int>(mx,0));
vector<vector<bool>> visited(mx, vector<bool>(mx,false));


int dp(int n, vector<string>& grid, int i=0, int j=0){
  if (i >= n || j >= n || grid[i][j] == '*') return 0;
  if (i == n-1 && j == n - 1) return 1;
  if (visited[i][j]) return arr[i][j];
  arr[i][j] = (dp(n, grid, i, j+1) + dp(n, grid, i+1, j)) % MxN;

  visited[i][j] = true;
  return arr[i][j];
}

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  vector<string> grid(n, "");
  string s;  
  for (int i = 0; i < n; ++i){
    cin >> s;
    grid[i] = s;
  }
  cout << dp(n, grid);

}