#include<iostream>
#include<vector>

using namespace std;

void findMissing(vector<int> arr){
     //  Visited method
     for(int i = 0; i<arr.size(); i++){
          int index = abs(arr[i]);
          if(arr[index-1]>0){
               arr[index-1] *= -1;
          }
     }
     for(int i = 0; i<arr.size(); i++){
          // cout << " " << arr[i];
          if(arr[i] > 0){
               cout << i+1 << " is missing" << endl;
          }
     }


     // Sorting + Swapping method

     int i = 0;
     while(i < arr.size()){
          int index =  arr[i] - 1;
          if(arr[i] != arr[index]){
               swap(arr[i],arr[index]);
          }else{
               ++i;
          }
     }
     for(int  i =0; i<n; i++){
          if(arr[i] != i+1){
               cout << i+1 << " ";
          }
     }
}


int main(){
     vector<int> arr{3,2,2,2,4};
     findMissing(arr);
     return 0;
}