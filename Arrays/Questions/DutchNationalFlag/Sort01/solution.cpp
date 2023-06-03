#include<iostream>
#include<vector>
using namespace std;

int sort(vector<int>& arr){
     int start = 0;
     int end = arr.size() - 1;

     while(end >= start){
          if(arr[start] == 1){
               swap(arr[start],arr[end]);
               end--;
          }else{
               start++;
          }
     }
     for(int i = 0; i<arr.size(); i++){
          cout << " "<< arr[i];
     }
}

int main(){
     vector<int> arr{0,1,1,0,1,0,1,0,0};

     sort(arr);

   
     return 0;
}