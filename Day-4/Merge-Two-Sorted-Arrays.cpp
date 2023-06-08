#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int n, int m) {
	int left = 0;
	int right = 0;
	int index = 0;
	vector<int> ans(m+n);
	while(left < n && right < m){
		if(nums1[left] <= nums2[right]){
			ans[index] = nums1[left];
			index++,left++;
		}
		else{
			ans[index] = nums2[right];
			index++,right++;
		}
	}
	while(left < n){
		ans[index] = nums1[left];
		index++,left++;
	}
	while(right < m){
		ans[index] = nums2[right];
		index++,right++;
	}
	return ans;
}