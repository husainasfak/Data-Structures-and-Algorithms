#include<iostream>
#include<vector>

using namespace std;

void sort(vector<int>& arr){
     int startIndex = 0;
     int endIndex = arr.size() - 1;     
     int midIndex = 0;

     while(midIndex <= endIndex){
          if(arr[midIndex] == 0){
               swap(arr[startIndex],arr[midIndex]);
               startIndex++;
               midIndex++;
          }else if(arr[midIndex] == 1){
               midIndex++;
          }else{
               swap(arr[midIndex],arr[endIndex]);
               endIndex--;
          }
     }

     for(int i=0; i<arr.size(); i++){
          cout << " " << arr[i];
     }
}

int main(){
     // vector<int> arr{2,0,2,1,1,0};
     vector<int> arr{2,0,1};

     sort(arr);

     return 0;
}