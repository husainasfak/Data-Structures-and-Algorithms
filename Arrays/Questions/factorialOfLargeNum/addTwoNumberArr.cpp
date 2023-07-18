// Add two number represented by two arrays


// Input : n = 3, m = 3
//         a[] = { 1, 2, 3 }
//         b[] = { 2, 1, 4 }
// Output : 337
// 123 + 214 = 337

// Input : n = 4, m = 3
//         a[] = { 9, 5, 4, 9 }
//         b[] = { 2, 1, 4 }
// Output : 9763


#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>

using namespace std;

string sumStoredInArr(vector<int> a,vector<int> b){
     int carry = 0;
     int i = a.size()-1; 
     int j = b.size()-1;
     string ans;

     while(i >=0 && j>=0){
          int x = a[i] + b[j] + carry;
          int digit = x%10; // last digit
          ans.push_back(digit + '0'); // digit is int type so convert into string we have to add + '0'
          carry = x/10;
          i--;
          j--;    
     }

     while(i >=0){
          int x = a[i] + 0 + carry;
          int digit = x%10; // last digit
          ans.push_back(digit + '0'); // digit is int type so convert into string we have to add + '0'
          carry = x/10;
          i--;   
     }

     while(j >=0){
          int x = 0 + b[j] + carry;
          int digit = x%10; // last digit
          ans.push_back(digit + '0'); // digit is int type so convert into string we have to add + '0'
          carry = x/10;
          j--;    
     }

     if(carry){
          ans.push_back(carry + '0');
     }
     // pop 0 in the beginning

     while(ans[ans.size()-1] == '0'){
          ans.pop_back();
     }

     reverse(ans.begin(),ans.end());
     return ans;
}

int main(){
     vector<int> a{0,9,0,0,3,5};
     vector<int> b{0,0,0,2,2,7};
     // vector<int> a{9,5,4,9};
     // vector<int> b{2,1,4};
     string ans = sumStoredInArr(a,b);
     cout << ans;
     return 0;
}