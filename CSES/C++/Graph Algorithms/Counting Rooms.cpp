#include <bits/stdc++.h>

using namespace std;
#define ll long long


void dfs(vector<string>& v, vector<vector<bool>>& visited, int x, int y, int n, int m){
  if (x < 0 || y < 0 || x >= m || y >= n || visited[y][x] || v[y][x] == '#') return;
  visited[y][x] = true;
  dfs(v,visited, x+1, y, n, m);
  dfs(v,visited, x-1, y, n, m);
  dfs(v,visited, x, y-1, n, m);
  dfs(v,visited, x, y+1, n, m);
}

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m;
  cin >> n >> m;
  int counter = 0;
  vector<string> v(n);
  for(int i = 0; i < n; i++) 
    cin >> v[i];

  vector<vector<bool>> visited(n, vector<bool>(m, false));
  for (int i = 0; i < n; ++i){
    for (int j = 0 ; j < m; ++j){
      if (!visited[i][j] && v[i][j] == '.'){
        counter++;
        dfs(v,visited,j,i,n,m);
      }
    }
  } 
  cout << counter;
}