// https://leetcode.com/problems/two-sum/
#include<iostream>
#include<vector>
#include<unordered_map>
#include <algorithm>
using namespace std;

vector<int> twoSum1(vector<int> nums,int t){
     int size = nums.size();

     for(int i = 0; i< size; i++){
          for(int j = i+1; j<size; j++){
               if(nums[i] + nums[j] == t){
                    return {i,j};
               }
          }
     }

     return {-1,-1};

}

vector<int> twoSum2(vector<int> nums,int target){
     int size = nums.size();
     unordered_map<int,int> mapping;

     // map value to its index
     // for(int i=0; i<size; i++){
     //      mapping[nums[i]] = i;
     // }

     //  we know  x + somthing = target where x is the specific number in the array
     //  so, target - x = somthing. we have to find something in the hash
     //  below code not working for all use cases beacause we have to assume that same element can not give the result. also we can not store duplicate number in map
     // for(int i = 0; i<size; i++){
     //      int x = nums[i]; 
     //      int something  = target  - x;
     //      if(mapping.find(something) != mapping.end()){
     //           return {i,mapping[something]};
     //      }
     // }
     
     for(int i = 0; i<size; i++){
          int x = nums[i]; 
          int something  = target  - x;
          if(mapping.find(something) != mapping.end()){
               return {i,mapping[something]};
          }
          mapping[nums[i]] = i;
     }
     return {-1,-1};
     
}


vector<int> twoSum3(vector<int> nums,int target){
     int size = nums.size();

     vector<pair<int,int>> v;

     for(int i = 0; i<size; i++)v.push_back({nums[i],i});

     sort(v.begin(),v.end());

     int start = 0, end = size-1;

     while(start<end){
          int sum = v[start].first + v[end].first;
          if(sum == target) return {v[start].second,v[end].second};
          else if(sum>target) end --;
          else start++;
     }
     return{-1,-1};

}
int main(){

     // vector<int> nums{2,7,11,15};
     vector<int> nums{3,2,4};
     int target = 6;
     // Approach 1. Brute force -  t - o(n2), s - o(1)
     // vector<int> sol = twoSum1(nums,target);

     // Approach 2. Using hash
     // vector<int> sol = twoSum2(nums,target);

     // Approach 3. sort and two pointer
     vector<int> sol =  twoSum3(nums,target);
     for(auto x:sol){
          cout << x << " ";
     }
}