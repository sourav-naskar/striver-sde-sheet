#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    // Write your code here.
       long ans = 1;
       long xx =x;
    long nn =n;
    if(nn<0) nn =-1*nn;
       while(nn>0){
           if(nn%2==0){
               xx=(xx%m*xx%m)%m;
               nn/=2;
           } else{
               ans=(ans*xx%m)%m;
               nn=nn-1;
           }
       }
    if(n<0) ans = (long)(1)/(long)(ans);
       return (int)(ans%m);
   }

