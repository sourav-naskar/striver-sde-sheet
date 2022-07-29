#include <bits/stdc++.h> 
int merge(long long *arr, long long *temp, long long lo, long long mid, long long hi)
{
   long long i=lo;
   long long j=mid;
    long long k=lo;
    long long count=0;
    while(i<=mid-1 && j<=hi)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
            count+=(mid-i);
        }
    }
    while(i<=mid-1)
    {
         temp[k]=arr[i];
            k++;
            i++;
    }
    while(j<=hi)
    {
        temp[k]=arr[j];
            k++;
            j++;
    }
    for(i=lo;i<=hi;i++)
    {
        arr[i]=temp[i];
    }
    return count;
}
int merge_sort(long long *arr, long long *temp, long long lo, long long hi)
{
    int mid;
    long long count=0;
    if(hi>lo)
    {
        mid=(lo+hi)/2;
        count+=merge_sort(arr,temp, lo,mid);
        count+=merge_sort(arr,temp,mid+1,hi);
        count+=merge(arr,temp,lo,mid+1,hi);
    }
    return count;
}
long long getInversions(long long *arr, int n){
    long long temp[n];
   merge_sort(arr,temp,0,n-1);
}