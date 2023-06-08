#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Bruteforce

// int firstRepeated(vector<int> arr){
//      int size = arr.size();
//      for(int i = 0; i<size; i++){
//           bool isRepeated = false;

//           for(int j= 0; j<size;j++){
//                if(arr[i] == arr[j]){
//                     isRepeated = true;
//                     return arr[i];
//                }
//           }
//      }
//      return -1;
// }

// Using hash 
int firstRepeated(vector<int> arr){
     int size = arr.size();
     unordered_map<int,int> umap;

     for(int i = 0; i<size; i++){
          umap[arr[i]]++;
     }


     for(int i =0; i<size; i++){
          if(umap[arr[i]] > 1){
               return arr[i];
          } 
     }
     return -1;
}

int main(){
     // vector<int> arr{6, 10, 5, 4, 9, 120, 4, 6, 10};
     vector<int> arr{10, 5, 3, 4, 3, 5, 6};
     int answer = firstRepeated(arr);

     cout << "Element "<< answer;
     

}