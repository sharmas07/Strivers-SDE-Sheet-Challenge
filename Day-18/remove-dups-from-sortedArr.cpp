int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int idx = 1;
	int cnt = 1;
	while(idx < n){
		if(arr[idx] != arr[idx-1]){
			cnt++;
			idx++;
		}
		else{
			while(arr[idx] == arr[idx-1]){
				idx++;
			}
		}
	}
	return cnt; // T.C O(N) S.C O(1);
}