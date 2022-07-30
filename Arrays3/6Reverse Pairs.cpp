#include <bits/stdc++.h>
int merge(vector<int> &arr,int low,int mid,int high){
    int cnt=0;
    int j= mid+1;
    for(int i=low;i<=mid;i++){
        while(j<=high&&arr[i]>2*arr[j]){
            j++;
        }
        cnt +=(j-(mid+1));
    }
    vector<int>temp;
    int left=low,right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return cnt;
}
int mergeSort(vector<int> &arr,int low,int high){
    if(low>=high) return 0;
    int mid = low + (high-low)/2;
    int inv = mergeSort(arr,low,mid);
    inv += mergeSort(arr,mid+1,high);
    inv += merge(arr,low,mid,high);
    return inv;
}
int reversePairs(vector<int> &arr, int n){
    // Write your code here.
    return mergeSort(arr,0,n-1);
}