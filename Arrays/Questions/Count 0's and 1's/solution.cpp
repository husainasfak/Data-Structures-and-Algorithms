#include<iostream>
using namespace std;


void count(int arr[],int size){
     int countZero = 0;
     int countOne = 0;

     for(int i = 0; i< size; i++){
          if(arr[i] == 0){
               countZero++;
          }else{
               countOne++;
          }
     }

     cout << "Zero's "<<  countZero;
     cout << "One's "<< countOne;
}

int main(){
     int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};

     int size = sizeof(arr)/sizeof(int);


     count(arr,size);
     return 0;
}