#include<iostream>
#include<vector>

using namespace std;


int main(){
     vector<int> arr{1,3,5,7,2,4,6};
     int size = arr.size();
     for(int i = 0; i < size; i++){
          for(int j =  i +1; j < size; j++){
               if(arr[i] + arr[j] == 9){
                    cout << "{" << arr[i] << ", " << arr[j] << "}";
               }
               
          }
     }

     return 0;
}