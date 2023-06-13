#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int major = -1;
	int cnt = n/2;
	unordered_map<int, int> freq;
	for(int i = 0;i<n;i++){
		freq[arr[i]]++;
		if(freq[arr[i]] > cnt){
			return arr[i];
		}
	}
	return major;
}