// #include <bits/stdc++.h>
// TC O(N*N) SC O(N);
// int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
//     unordered_map<int, bool> mp;
//     for(int i = 0;i<n;i++){
//         mp[arr[i]] = true;
//     }
//     int cnt = 0;
//     int index = 0;
//     for (int i = 0; i < n; i++) {
//         index = 1;
//         int tempCnt = 0;
//         while(i<n && mp[arr[i]+index]){
//             tempCnt++;
//             index++;
//         }
//         cnt = max(cnt, tempCnt);
//     }
//     return cnt+1;
// }
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    
    sort(arr.begin(), arr.end());
    int i=0; int j=1;
    int count=1;
    int maxCount=1;
    while(i<n && j<n){
        if(arr[j]-arr[i] ==1){
            count++;
            maxCount= max(count, maxCount);
            i++;
            j++;
        }
        else if(arr[j]-arr[i]==0){
            i++;
            j++;
        }
        else{
            count=1;
            i++;
            j++;
        }
    }
    return maxCount;
}