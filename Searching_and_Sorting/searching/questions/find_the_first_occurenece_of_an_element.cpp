//  {1,2,4,4,4,4,4,5,6,7,9} at index 2 is the first occurenece of 4;

#include<bits/stdc++.h>
using namespace std;

int first_occurence(vector<int> v, int num){
     int start = 0;
     int end = v.size()-1;
     int mid = start + (end -  start)/2;

     int ans = -1;

     while(start<=end){
          if(v[mid] == num){
               ans = mid;
               end = mid -1;
          }else if(v[mid] < num){
               start = mid + 1;
          }else{
               end = mid - 1;
          }
          mid = start + (end -  start)/2;
     }
     return ans;
}

int main(){
     vector<int> v{1,3,4,4,4,4,6,6,7};

     int indexOfFirstOcc = first_occurence(v,6);

     cout << "First occurence " << indexOfFirstOcc;
     return  0;
}