#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long current_sum=0;
    long long max_sum=0;
    
    for(int i=0; i<n; i++) {
        current_sum += arr[i];
        max_sum = max(current_sum, max_sum);
        
        if(current_sum < 0) {
            current_sum = 0;
        }
    }
    
    return max_sum;
}