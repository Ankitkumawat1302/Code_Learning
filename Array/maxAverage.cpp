#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

 double findMaxAverage(std::vector<int>& nums, int k) {
        // To be implemented
        int n = nums.size();
        // here we have minimum element to compare
        double maxResult = -1e9;
        double totalSum = 0;
        int i = 0;
        if(n == 0 || n == 1){
            return nums[0];
        }
        else{
           for(int i = 0; i <= n - k; i++ ){
            // this accumulate can't use without the numeric libary 
           totalSum = accumulate(nums.begin() + i, nums.begin() + i + k, 0);
         double result = totalSum/k;
         
        maxResult = max(maxResult, result);
    }
    
   


        }
   
      
         return maxResult;

    }

    int main(){

         vector<int> nums;
    nums.push_back(1);
    nums.push_back(12);
    nums.push_back(-5);
    nums.push_back(-6);
    nums.push_back(50);
    nums.push_back(3);

   
    
    cout << findMaxAverage( nums, 4) << endl;


    }