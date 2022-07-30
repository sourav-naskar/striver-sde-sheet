#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
    int a=1;
    for(int i=1;i<n;i++)
    {
        a=(a*(m+i-1))/i;
    }
    return a;
}