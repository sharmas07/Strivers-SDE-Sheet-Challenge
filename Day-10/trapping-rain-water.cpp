#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    int left = 0;
    int right = n-1;

    long leftMax = arr[left];
    long rightMax = arr[right];

    long res = 0;
    while(left<right){
        if(leftMax < rightMax){
            left++;
            leftMax = max(leftMax, arr[left]);
            res += leftMax - arr[left];
        }
        else{
            right--;
            rightMax = max(rightMax, arr[right]);
            res += (rightMax - arr[right]);
        }
    }
    return res;
}