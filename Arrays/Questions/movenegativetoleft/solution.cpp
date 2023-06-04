#include<iostream>
#include<vector>

using namespace std;

// void moveNegativeToLeft(vector<int> &arr){
//      int size = arr.size();

//      int start = 0; int end = 0;

//      while(end != size-1){
//           if(arr[end] < 0){
//                swap(arr[start],arr[end]);
//                start++;
//                end++;
//           }else{
//                end++;
//           }
//      }
//      for(int i=0; i<size; i++){
//           cout << " "<< arr[i];
//      }
// }


void moveNegativeToLeft(vector<int> &arr){
     int size = arr.size();

     int low = 0; int high = size -1;

     while(low <= high){
          if(arr[low] >= 0){
               swap(arr[low],arr[high]);
               high--;
          }else{
               low++;
          }
     }
     for(int i=0; i<size; i++){
          cout << " "<< arr[i];
     }
}



int main(){

     // vector<int> arr{0,1,2,-3,4,-5,6,-3,-3,-4};
     vector<int> arr{-1,2,-3,4,-5,6,0,-5,34,-7};

     moveNegativeToLeft(arr);

     return 0;
}