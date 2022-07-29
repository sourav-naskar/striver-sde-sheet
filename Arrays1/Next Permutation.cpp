#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    
    if(n==1)
    {
        return p;
    }
    int x=p.size();
    int index=-1;
     p[-1]=0;
    for(int i=0;i<p.size()-1;i++)
    {
        if(p[i]<p[i+1])
        {
            index=i;
        }
    }
    int index1=-1;
   
     for(int i=0;i<p.size();i++)
    {
        if(p[i]>p[index])
        {
           index1=i;
        }
    }
    if(index==-1 && index1==p.size()-1)
    {
        reverse(p.begin(),p.end());
    }
    else
    {
    swap(p[index],p[index1]);
        reverse(p.begin()+index+1,p.end());
    }
    return p;
    
}