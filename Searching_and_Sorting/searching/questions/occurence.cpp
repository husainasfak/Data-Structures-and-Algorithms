//  {1,2,4,4,4,4,4,5,6,7,9} at index 2 is the first occurenece of 4;

#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

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

int last_occurence(vector<int> v, int target){
     int start = 0;
     int end = v.size()-1;
     int mid = start + (end - start)/2;
     int ans = -1;
     while(start<=end){
          if(v[mid] == target){
               ans = mid;
               start = mid + 1;
          }
          else if(v[mid] > target){
               end = mid - 1;
          }else{
               start  = mid + 1;
          }
          mid  = start + (end - start)/2;
     }
     return ans;
}

int main(){
     vector<int> v{1,3,4,4,4,4,6,6,7};

     int target = 4;
     int indexOfFirstOcc = first_occurence(v,target);

     cout << "First occurence " << indexOfFirstOcc << endl;


     int indexOfLastOcc = last_occurence(v,target);
     cout << "Last Occurence of " << target << " is at index : " << indexOfLastOcc << endl;
     
     // in-built functions

     auto lower =  lower_bound(v.begin(), v.end(), 20); // iterative
     auto upper =  upper_bound(v.begin(), v.end(), 20);

     cout << "Standard fun " << lower - v.begin() << " " << upper - v.begin() << endl;

     int totalOccurence = indexOfLastOcc - indexOfFirstOcc + 1;
      cout << "Total Occurence " << totalOccurence;
     return  0;
}