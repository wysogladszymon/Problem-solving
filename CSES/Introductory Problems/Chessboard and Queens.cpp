#include <bits/stdc++.h>

typedef long long ll;

int count = 0;
int const  n = 8;
int mines[n][n];
int column[n];
int diag1[2 * n - 1];
int diag2[2 * n - 1];

void backtrack(int y = 0)
{
    if (y == n)
        count++;
    else
    {
        for (int x = 0; x < n; x++)
        {
            if(column[x] || diag1[x+y]  || diag2[n - 1 + x - y]  || mines[y][x] )
                continue;

            column[x] = diag1[x + y] = diag2[n - 1 + x - y] = 1;
            backtrack(y + 1);
            column[x] = diag1[x + y] = diag2[n - 1 + x - y] = 0;
        }
    }
}


int main()
{

    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    for (int i = 0; i < 2 * n - 1; i++)
    {
        diag1[i] = 0;
        diag2[i] = 0;
        column[i % n] = 0;
    }
    
    
    std::string word;

    // ustawienie miejsc niedostepnych na 1
    for (int i = 0; i < n; i++)
    {
        std::cin >> word;
        for (int j = 0; j < n; j++)
            if (word[j] == '*')
                mines[i][j] = 1;
            else
                mines[i][j] = 0;
    }

    backtrack();

    std::cout << count;
}