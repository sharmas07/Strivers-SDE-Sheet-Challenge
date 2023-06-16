#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int k)
{
    int xr = 0;
    unordered_map<int, int> mp;
    mp[xr]++;
    int count = 0;
    for(int i = 0;i<arr.size();i++){
        xr ^= arr[i];
        int x = xr ^ k;
        count += mp[x];
        mp[xr]++;
    }
    return count;
}