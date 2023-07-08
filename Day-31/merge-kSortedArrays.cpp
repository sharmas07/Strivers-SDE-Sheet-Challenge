#include <bits/stdc++.h> 
class data{
    public:
    int val;
    int vpos;
    int apos;
    data(int v, int vp, int ap){
        val = v;
        vpos = vp;
        apos = ap;
    }
};
struct cmp{
    bool operator()(data &d1, data &d2){
        return d1.val > d2.val;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&arr, int k) 
{
    vector<int> ans;
    priority_queue<data, vector<data>, cmp> pq;

    for(int i = 0;i<k;i++){
        data d(arr[i][0], i, 0);
        pq.push(d);
    }

    while(!pq.empty()){
        data curr = pq.top(); pq.pop();
        ans.push_back(curr.val);
        int ap = curr.apos, vp = curr.vpos;
        if(vp+1 < arr[ap].size()){
            data d(arr[ap][vp+1], ap, vp+1);
            pq.push(d);
        }
    }
    return ans;
}
