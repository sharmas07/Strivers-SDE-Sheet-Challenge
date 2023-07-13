void solve(int n, vector<int> arr, int index, vector<vector<int>> &ans, vector<int>&subSet, int subSetSum, int k){
    // base case
    if(index == n){
        if(subSetSum == k){
            ans.push_back(subSet);
        }
        subSetSum = 0;
        return;
    }

    subSet.push_back(arr[index]);
    solve(n, arr, index+1, ans, subSet, subSetSum+arr[index], k);

    subSet.pop_back();
    solve(n, arr, index+1, ans, subSet, subSetSum, k);


}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> subSet;
    int index = 0;
    int subSetSum = 0; 
    solve(n, arr, index, ans, subSet, subSetSum, k);

    return ans;

}