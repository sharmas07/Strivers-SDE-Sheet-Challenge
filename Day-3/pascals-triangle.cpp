#include <bits/stdc++.h>
vector<long long int> genRow(int row){
  long long res = 1;
  vector<long long int> ans;
  ans.push_back(res);
  for(int col = 1;col<row;col++){
    res = res*(row-col);
    res = res/col;
    ans.push_back(res);
  }
  return ans;
}
vector<vector<long long int>> printPascal(int numRows)
{
  vector<vector<long long int> > ans;
  for(int i = 1;i<=numRows;i++){
    ans.push_back(genRow(i));
  }
  return ans;
}
