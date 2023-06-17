#include <bits/stdc++.h> 
long long cnt = 0;
void merge(long long *arr, int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int * first = new int[len1];
    int * second = new int[len2];

    int mainArrIdx = s;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mainArrIdx++];
    }
    mainArrIdx = mid + 1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[mainArrIdx++];
    }

    mainArrIdx = s;
    int idx1 = 0;
    int idx2 = 0;
    while(idx1 < len1 && idx2 < len2){
        if(first[idx1] < second[idx2]){
            arr[mainArrIdx++] = first[idx1++];
        }
        else{
            cnt += (len1 - idx1);
            arr[mainArrIdx++] = second[idx2++];
        }
    }
    while(idx1 < len1){
        arr[mainArrIdx++] = first[idx1++];
    }
    while(idx2 < len2){
       arr[mainArrIdx++] = second[idx2++];
    }
    
}
void solve(long long *arr, int s, int e){
   
    if(s >= e){
        return ;
    }
    int mid = s + (e-s)/2;
    solve(arr, s, mid);
    solve(arr, mid+1, e);
    merge(arr, s, e);
   
}

long long getInversions(long long *arr, int n){
    solve(arr, 0, n-1);
    return cnt;
}