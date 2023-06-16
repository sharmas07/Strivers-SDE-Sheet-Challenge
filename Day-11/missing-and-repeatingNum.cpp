#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int, int> ans;
	for(int i = 0;i<n;i++){
		int index = abs(arr[i]) - 1;
		if(arr[index] < 0){
			ans.first = index + 1;
		}
		else{
			arr[index] *= -1; 
		} 
	}
	for(int i = 0;i<n;i++){
		if(arr[i] > 0){
			ans.second = i+1;
		}
	}
	return {ans.second, ans.first};
}
