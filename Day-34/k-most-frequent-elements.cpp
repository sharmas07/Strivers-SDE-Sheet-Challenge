#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;

    for(int i =0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto i = mp.begin();i != mp.end();i++){
        pq.push({i->second, i->first});
        if(pq.size() > k){
            pq.pop();
        }
    }

    while(!pq.empty()){
        int val = pq.top().second;
        ans.push_back(val);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    
    return ans;
}