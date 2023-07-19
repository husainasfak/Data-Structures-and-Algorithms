#include<bits/stdc++.h>


// Time  - o(n); space - o(1)
bool linear_search(vector<int> arr,key){
     for(int i = 0; i<arr.size(); i++){
          if(arr[i] == key){
               return true
          }
     }
     return false;
}
int main(){
     vector<int> arr{0,1,2,3,4,5,6,7,8,9};
     linear_search(arr,7);
     return 0;
}