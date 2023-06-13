#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int cnt = arr.size()/3;
    vector<int> ans;
    unordered_map<int, int> freq;
    unordered_map<int, bool>  vis;
    for(int i = 0;i<arr.size();i++){
        freq[arr[i]]++;
        if(freq[arr[i]] > cnt && vis[arr[i]] == false){ 
            vis[arr[i]] = true; 
            ans.push_back(arr[i]);
        }
    }
    return ans;
}