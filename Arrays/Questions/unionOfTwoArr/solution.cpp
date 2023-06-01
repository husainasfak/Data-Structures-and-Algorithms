#include<iostream>
#include<vector>
using namespace std;

int main(){

     int arr1[] = {1,3,5,7,9};
     int size1 = sizeof(arr1)/sizeof(int);
     int arr2[] = {2,4,6,8};
     int size2 = sizeof(arr2)/sizeof(int);
     
     vector<int> answer;

     // Assume no duplicates

     // push element of arr1 into answer;
     for(int i = 0; i<size1; i++){
          answer.push_back(arr1[i]);
     }
     
     // push element of arr2 into answer

     for(int j = 0; j<size2; j++){
          answer.push_back(arr2[j]);
     }

     for(auto ele:answer){
          cout << ele << ", ";
     }
     return 0;
}