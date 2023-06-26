#include <bits/stdc++.h>

string fourSum(vector<int> nums, int target, int n) {
    sort(nums.begin(), nums.end());
    string ans = "Yes";
    vector<vector<int>> output;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
            int low = j+1, high = n-1;
            while(low < high){
                if(nums[low] + nums[high] < newTarget){
                    low++;
                }
                else if(nums[low] + nums[high] > newTarget){
                    high--;
                }
                else{
                    return ans;
                }
            }
            while(j+1 < n && nums[j] == nums[j+1]) j++;
        }
        while(i+1 < n && nums[i] == nums[i+1]) i++;
    }
    ans = "No";
    return ans;
}
