#include <bits/stdc++.h>

typedef long long ll;


int main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0);

    int n, m, k;
    std::cin >> n >> m;
    std::vector<int> tickets;

    for (int i = 0; i < n; i++)
    {
        std::cin >> k;
        tickets.push_back(k);
    }
    std::sort(tickets.begin(), tickets.end());

    for (int i = 0; i < m; i++)
    {
        std::cin >> k;
        int j = 0;
        int z = 0;
        while(k >= tickets[j] && j < n)
        {
            if(tickets[j] > 0)
            {
                z = j; 
            }
            ++j;
        }
        /*std::cout << "wektor to: ";
        for(auto a : tickets)
            std::cout << a<< " ";
        */std::cout << tickets[z]<<std::endl;
        tickets[z] = -1; //chosen
    }
}