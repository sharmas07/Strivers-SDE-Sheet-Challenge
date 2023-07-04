#include <bits/stdc++.h> 
void solve(int index, string s, vector<string> &ans){
    if(index >= s.size()){
        ans.push_back(s);
        return;
    }
    for(int j = index;j < s.size();j++){
        swap(s[index], s[j]);
        solve(index+1, s, ans);
        swap(s[index], s[j]);
    }
}
vector<string> findPermutations(string &s) {
    vector<string> ans;
    solve(0, s, ans);
    return ans;
}