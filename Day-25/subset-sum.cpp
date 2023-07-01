#include <bits/stdc++.h> 
void solve(int ind,vector<int>&num,int n ,int sum,vector<int>&ans)
{
    if(ind==n)
    {
        ans.push_back(sum);
        return ;
    }
    solve(ind+1,num,n,sum+num[ind],ans);
    solve(ind+1,num,n,sum,ans);
}
vector<int> subsetSum(vector<int> &num){
	vector<int> ans;
	int n = num.size();
	solve(0, num, n, 0, ans);
	sort(ans.begin(), ans.end());
	return ans;
}