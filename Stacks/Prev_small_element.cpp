#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

 void solve(int arr[] , int &n, vector<int> &ans){

    stack<int> s;
    s.push(-1);

    for(int i = 0; i < n; i++){
        
        int element = arr[i];

        while(s.top() > element){

            s.pop();

        }

        // when i am reach here , it means top of the stack has small element  
        // so we store that small elemet in the ans
        
        ans.push_back(s.top());

        // now left element should be push in the stack
        s.push(element);
    }

 }

int main(){

    int arr[] = {8,4,2,6,3};
    int n = 5;

   
  vector<int> ans;
  
  solve(arr, n, ans);
    

    for(int i : ans){
        cout << i<<"  ";
    }


}