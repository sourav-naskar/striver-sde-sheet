#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    //i1-->i2--> i1+i2=s is true;
    vector<vector<int>> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        int count =mp[s-arr[i]];
        while(count){
            ans.push_back({min(arr[i],s-arr[i]),max(arr[i],s-arr[i])});
            count--;
        }
        
        mp[arr[i]]+=1;
    }
    
    sort(ans.begin(),ans.end());
    
    return ans;
    
}
