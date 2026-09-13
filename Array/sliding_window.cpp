#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

double findMaxAverage(vector<int>& nums, int k){
        int n = nums.size();
        
        // 1. Calculate the sum of the first window of size k
        double windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        
        // Initialize maxSum with the sum of the first window
        double maxSum = windowSum;
        
        // 2. Slide the window across the array from index k to n - 1
        for (int i = k; i < n; i++) {
            // Add incoming element nums[i] and subtract outgoing element nums[i - k]
            windowSum += nums[i] - nums[i - k];
            
            // Keep track of the maximum sum found so far
            maxSum = max(maxSum, windowSum);
        }
        
        // 3. Return the maximum average
        return maxSum / k;
    }

int main() {

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(12);
    nums.push_back(-5);
    nums.push_back(-6);
    nums.push_back(50);
    nums.push_back(3);

   
    
    cout << findMaxAverage( nums, 4) << endl;



    
}





