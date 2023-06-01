#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

int findUnique(vector<int> arr){
     int answer = 0;

     for(int i = 0; i<arr.size(); i++){
          answer = answer ^ arr[i];
     }
     return answer;

     
}

int main(){
     vector<int> arr{1,2,4,2,1,3,6,5,5,6,4};

     int unique = findUnique(arr);

     cout << "Unique " << unique;
     return 0;
}
