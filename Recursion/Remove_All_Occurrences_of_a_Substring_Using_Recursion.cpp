#include<iostream>
#include<algorithm>
using namespace std;

// solution through recursion 

void solve(string& s, string part){
    // base case
    if(s.find(part) == string::npos){
        return;
    }
    int pos = s.find(part);//it give me the first element of the
    // finded part in s and if not then this give us npos so here
    // we use if pos not equal then erase other wise not
    if(pos != string::npos ){
        s.erase(pos, part.length());
        solve(s,part);
    }
    
    
}
   int main() {
    string s = "mississippi";
     string part = "iss";
        // Logic to be implemented by the user
      
         solve(s, part);

         for(int i = 0; i < s.length();i++){
            cout<< s[i] <<" " ;
         }
    }
