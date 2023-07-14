#include<iostream>
#include<vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;
vector<int> method1(vector<int> arr1, vector<int> arr2, vector<int> arr3){
     int i,j,k;
     i = j = k = 0;

     set<int> answer;

     int size1 = arr1.size();

     int size2 = arr2.size();

     int size3 = arr3.size();
 

     while(i<size1 && j<size2 && k<size3){
          // cout << i << " " << j << " " << k << endl;
          if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
               answer.insert(arr1[i]);
               i++;
               j++;
               k++;
          }else if(arr1[i] < arr2[j]){
               i++;
          }else if(arr2[j] < arr3[k]){
               j++;
          }else{
               k++;
          }
     }
     for(auto i:answer){
          cout << i << " ";
     }
}

vector<int> method2(vector<int> arr1, vector<int> arr2, vector<int> arr3){
     // These duplicate entries can be handled without using any additional data structure by keeping the track of the previous element. Since the elements inside the array are arranged in sorted manner there is no possibility for the repeated elements to occur at random positions. 

     int i,j,k;

     i = j = k = 0;
     int prev1, prev2, prev3;
     prev1 = prev2 = prev3 = INT_MIN;
     int size1 = arr1.size();

     int size2 = arr2.size();

     int size3 = arr3.size();

     while(i<size1 && j<size2 && k<size3){

          while(arr1[i] == prev1 && i<size1){
               i++;
          }
          while(arr2[j] == prev2 && j<size2){
               j++;
          }
          while(arr3[k] == prev3 && k<size3){
               k++;
          }

          if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
               cout << " " << arr1[i];
               prev1 = arr1[i++];
               prev2 = arr2[j++];
               prev3 = arr3[k++];
          }else if(arr1[i] < arr2[j]){
               prev1 = arr1[i++];
          }else if(arr2[j] < arr3[k]){
               prev2 = arr2[j++];
          }else{
               prev3 = arr3[k++];
          }
     }
}


int main(){
     vector<int> arr1{1, 5, 10, 20, 40, 80};
     vector<int> arr2{6, 7, 20, 80, 100};
     vector<int> arr3{3, 4, 15, 20, 30, 70, 80, 120};
     // vector<int> arr1{3,3,3};
     // vector<int> arr2{3,3,3};
     // vector<int> arr3{3,3,3};

     // Method 1 - Intersection -- T - O(n); S - O(n)
     // method1(arr1,arr2,arr3);

     // Method 2 - without use of SET
     method2(arr1,arr2,arr3);
}