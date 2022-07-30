#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int mxLen = 0;
    int s = 0;
    unordered_map<int, int> hmap; // sum, index
    hmap[0] = 0;
    for(int i=0; i<arr.size(); ++i){
        s += arr[i];
        if(hmap.find(s) != hmap.end()){
            int l = i - hmap[s];
            if(s == 0){// base case
                l = i+1;
            }
            mxLen = max(mxLen, l);
        }else{
            hmap[s] = i;
        }
    }
    return mxLen;
}