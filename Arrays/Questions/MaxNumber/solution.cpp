#include<iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[], int size){
     int max = INT_MIN;

     for(int i = 0; i<size; i++){
          if(arr[i] > max){
               max = arr[i];
          }
     }

     return max;
}

int main(){
     int arr[] = {1,2,3,4,5,6,9};

     int size = sizeof(arr)/sizeof(int);


     int max = findMax(arr,size);

     cout << "max number is " << max;
     return 0;
}