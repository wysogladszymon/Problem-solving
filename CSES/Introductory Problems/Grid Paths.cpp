#include <bits/stdc++.h>

typedef long long ll;

bool vis[7][7]; 
int counter = 0;
std::string s;

bool empty(int x, int y) 
{
    return x >= 0 && x < 7 && y >= 0 && y < 7 && !vis[y][x]; 
}

void dfs( int x, int y, int index = 0)
{
    if(x == 0 && y == 6)
    {
        if(index == 48)
            ++counter;
        return;
    }
    char a = s[index];
    vis[y][x] = 1;
    if ( a == '?' || a =='R')
    {
        if(x < 6 && !vis[y][x+1])
            if (!(empty(x + 1, y + 1) && empty(x + 1, y - 1) && !empty(x + 2, y )))
                dfs(x + 1, y, index + 1);       
    }
    if ( a == '?' || a =='L')
    {
        if(x > 0 && !vis[y][x-1])
            if (!(empty( x-1, y+1) && empty(x - 1, y - 1) && !empty(x - 2, y)))
                dfs(x - 1, y, index + 1);
    }
    if ( a == '?' || a =='U')
    {
        if ( y > 0 && !vis[y -1][x])
            if (!(empty(x - 1, y - 1) && empty( x + 1, y - 1) && !empty(x , y - 2)))
                dfs(x , y - 1, index + 1);
    }
    if ( a == '?' || a =='D')
    {
        if( y < 6 && !vis[y +1][x])
            if ( empty(x, y + 1) && !(empty(x-1 , y+1) && empty(x+1, y+1) && !empty(x, y + 2)))
                dfs(x , y + 1, index + 1);
    }
    vis[y][x] = 0;
}


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    std::cin >> s;
    dfs(0, 0);
    std::cout << counter;
}