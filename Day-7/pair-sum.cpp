#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(), arr.end());
   vector<vector<int>> ans;
   int n = arr.size();
   int j = 0;
   for(int i = 1;i<n;i++){
      int sum = arr[i] + arr[j];

      if(sum == s){
         vector<int>temp;
         if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
         }
         else{
            temp.push_back(arr[j]);
            temp.push_back(arr[i]);
         }
         ans.push_back(temp);
      }
      if(sum > s || (i == arr.size()-1 && j < arr.size())){
         j++;
         i = j;
      }
   }
   return ans;
}