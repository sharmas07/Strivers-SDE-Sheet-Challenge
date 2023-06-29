#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    vector<pair<double, pair<int, int>>> v;
    for(int i = 0;i<n;i++){
        double perUnitVal = (1.0*items[i].second) / items[i].first;
        v.push_back({perUnitVal, {items[i].first, items[i].second}});
    }
    sort(v.begin(), v.end());
    double totalVal = 0;

    for(int i = n-1;i>=0;i--){
        if(v[i].second.first > w){
            totalVal += w*v[i].first;
            w = 0;
        }
        else{
            totalVal += v[i].second.second;
            w = w - v[i].second.first;
        }
    }
    return totalVal;

}