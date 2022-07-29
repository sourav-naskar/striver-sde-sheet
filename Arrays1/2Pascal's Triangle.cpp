#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    if(n==1){
        vector<long long int>input;
        input.push_back(1);
        vector<vector<long long int>>ans;
        ans.push_back(input);
        return ans;
    }
    int work=n%10;
    vector<vector<long long int>>output=printPascal(n-1);
    int size=output.size();
    vector<long long int>sample=output[size-1];
    vector<long long int >input;
    input.push_back(sample[0]);
    for(long long int i=0;i<sample.size()-1;i++){
        long long int x=sample[i]+sample[i+1];
        input.push_back(x);
    }
    long long int last=sample.size()-1;
    input.push_back(sample[last]);
    output.push_back(input);
    return output;
}