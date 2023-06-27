#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int, int>> ans;
    for(int i = 0;i<start.size();i++){
        ans.push_back({finish[i], start[i]});
    }
    sort(ans.begin(), ans.end());

    int lastAct = -1;
    int res = 0;
    for(int i = 0;i<ans.size();i++){
        if(ans[i].second > lastAct-1){
            res++;
            lastAct = ans[i].first;
        }
    }
    return res;


}