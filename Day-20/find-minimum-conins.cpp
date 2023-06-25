#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    int coins = 0;
    vector<int> denoms = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int i = 8;
    while(i>=0 && amount!=0){
        if(amount < denoms[i]){
            i--;
            continue;
        }
        amount -= denoms[i];
        coins++;
    }
    return coins;
}
