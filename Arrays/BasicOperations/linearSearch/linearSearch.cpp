#include<iostream>
using namespace std;

int linear_serach(int arr[], int size, int key){
     for(int i=0; i<size; i++){
          if(arr[i] == key){
               return i;
          }
     }
     return -1;
}

int main(){
     int arr[10] = {2,3,8,7,5,1,3,0,4,6};

     // Size of array
     int size = sizeof(arr)/sizeof(int);

     int key = 0;


     int index = linear_serach(arr,size,key);

     cout << key << " is found at " << index;
     
     return 0;
}