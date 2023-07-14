#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

int method1(vector<int> prices){
     int size = prices.size();

     int minBuyingPrice = INT_MAX;
     int minBuyingPriceIndex = 0;
     int maxSellingPrice = 0;
     int maxProfit = 0;
     
     for(int i = 0; i<size; i++){
          if(minBuyingPrice > prices[i]){
               minBuyingPrice = prices[i];
               minBuyingPriceIndex = i;
          }
     }

     if(minBuyingPriceIndex == size-1){
          return maxProfit;
     }

     for(int j = minBuyingPriceIndex + 1; j<size; j++){
          
          if(maxSellingPrice < prices[j]){
               maxSellingPrice = prices[j];
          }
     }
     
     maxProfit = maxSellingPrice - minBuyingPrice;
     
     if(maxProfit < 0){
          maxProfit = 0;
          return maxProfit;
     }
     return maxProfit;

}




int main(){
     // vector<int> prices{7,1,5,3,6,4};
     vector<int> prices{1,2};

     // Not a good method, not working in [2,4,1];
     int answer = method1(prices);

     cout << "Max Profit " << answer;

}