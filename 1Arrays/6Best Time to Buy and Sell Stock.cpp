#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){

   long minsofar=prices[0],  currdiff=0, maxdiff=0;



for (int i=1; i<prices.size(); i++){

 if(prices[i]<minsofar)

  minsofar = prices[i];

 else{

  currdiff = prices[i] - minsofar;

  if(currdiff>maxdiff)

   maxdiff = currdiff;

 }

 

}

return maxdiff;

}