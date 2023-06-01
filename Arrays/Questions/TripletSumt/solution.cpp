#include<iostream>
#include<vector>

using namespace std;


int main(){
     vector<int> arr{10,20,30,40};
     int size = arr.size();
     for(int i = 0; i < size; i++){
          for(int j =  i +1; j < size; j++){
               
               for(int k = j + 1; k < size; k++){
                    if(arr[i] + arr[j] + arr[k] == 80){
                         cout << "{" << arr[i] << ", " << arr[j] << ", " << arr[k] << "}";
                    }
                       
                   
               }
               
          }
     }

     return 0;
}