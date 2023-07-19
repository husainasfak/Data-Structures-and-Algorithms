#include<bits/stdc++.h>

using namespace std;

// Array should be in monotonic (increasing or decreasing) order; then we can apply binary search

int binarySearch(int arr[],int size, int target){
     int start = 0;
     int end = size -1;
     //int mid  = (start+end)/2;  this is not suitable beacuse it may be cause integer overflow. when start + end compute may be it cross the range of integer.

     int mid =  start + (end -  start)/2; 

     while(start<=end){
          int element = arr[mid];

          if(element == target){
               return mid;
          }
          else if(target < element){
               // Search in left
               end = mid - 1;
          }
          else{
               // Search in right
               start = mid + 1;
          }
          // mid = (start+end)/2;
          mid = start + (end - start)/2;
     }
     return -1;
}

int main(){
     int arr[] = {2,4,6,8,10,12,16};

     int size = sizeof(arr)/sizeof(int);

     int target = 10;

     int indexOfTarget = binarySearch(arr,size,target);

     if(indexOfTarget == -1){
          cout << "Target not found" <<endl;
     }else{
          cout << "Target found at " << indexOfTarget << " index";
     }
     return 0;
}



//  Time - o(logN); space - o(1);