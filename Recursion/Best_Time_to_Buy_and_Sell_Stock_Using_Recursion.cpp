#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>

using namespace std;
   
      void solve(vector<int> prices, int i ,int& minPrice, int& maxProfit){
        //base case
        if( i == prices.size()){
            return;
        }
        if(prices[i] < minPrice){
            minPrice = prices[i];
            
        }
        int currentProfit = prices[i] - minPrice;
    
    // Update maxProfit if currentProfit is higher
    if (currentProfit > maxProfit) {
        maxProfit = currentProfit;
    }
        solve(prices, i + 1, minPrice, maxProfit);
      }

    int main() {
        vector<int> prices = {7, 1, 5, 3, 6, 4};
        // Placeholder logic for maximum profit calculation
     int minPrice = INT_MAX;
      int maxProfit = 0;
      solve(prices, 0, minPrice, maxProfit);
      cout << maxProfit;
    }
