#include<iostream>
#include<vector>

using namespace std;


//  Possible sol 2. visit and mark negative
// int  duplicateNum(vector<int> arr){
//      int size = arr.size();

//      int ans = -1;
//      for(int i = 0; i<size; i++){
//           int index = abs(arr[i]);

//           if(arr[index] < 0){
//                ans = index;
//                break;
//           }
//           arr[index] *= -1;
//      }
//      return ans;
// }


// Possible sol 3. place element in their right position at the end we will get extra element

int duplicateNum(vector<int> arr){
     int index = arr[0];

        while(index != arr[index]){
            swap(index,arr[index]);
        }

        return index;
}
int main(){
     vector<int> arr{1,3,4,2,2};
     // vector<int> arr{3,1,3,4,2};

     // Possible sol 1. sort the array and compare i and i+1

     //  Possible sol 2. visit and mark negative 
     // int duplicate = duplicateNum(arr);

     // Possible sol 3. place element in their right position at the end we will get extra element
int duplicate = duplicateNum(arr);
     cout << "Duplicate "<< duplicate;
     return 0;
}