// Find factorial of large number


#include<bits/stdc++.h>

using namespace std;
vector<int> factorial(int num){
     vector<int> ans;
     ans.push_back(1);
     int carry = 0;
     for(int i = 2; i<=num; i++){
          for(int j = 0; j<ans.size(); j++){
               int x = ans[j] * i + carry;
               ans[j] = x %10;
               carry = x/10;
          }
          if(carry){
               ans.push_back(carry%10);
               carry/=10;
          }
          carry = 0;
     }
     reverse(ans.begin(),ans.end());
     for(auto x:ans){
          cout << x;
     }
     return ans;
}

int main(){
     int num = 7;
     factorial(num);
     return 0;
}