#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void rowSum(int arr[][3]){
     for(int i = 0; i<3; i++){
          int sum = 0;
          for(int j = 0; j<3; j++){
               sum += arr[i][j];
               // cout << arr[i][j] << " ";
          }
          cout << i << " row sum : " <<sum << endl;
          // cout << endl;
     }
}

void colSum(int arr[][3]){
     for(int i = 0; i<3; i++){
          int sum = 0;
          for(int j = 0; j<3; j++){
               sum += arr[j][i];
               // cout << arr[i][j] << " ";
          }
          cout << i << " row sum : " <<sum << endl;
          // cout << endl;
     }
}

bool linear_search(int arr[][3],int key){
     for(int i = 0; i<3; i++){
      
          for(int j = 0; j<3; j++){
               if(arr[i][j] == key){
                    return true;
               }
               
          }
         
     }
     return false;
}

void min_max(int arr[][3]){
     int max = INT_MIN;
     int min = INT_MAX;

     for(int i = 0; i<3; i++){
          for(int j = 0; j<3; j++){
               if(arr[i][j] > max){
                    max = arr[i][j];
               }
               if(arr[i][j] < min){
                    min = arr[i][j];
               }
               
          }
     }
     cout << "Min in the array " << min << endl;
     cout << "Max in the array " << max;
}



void transpose(int arr[][3],int transposeArr[3][3]){
     // row  -> col
     // col -> row
     //  Remember - if loop entirely it will swap twice so we get the same array 
     // Swap is not the solution {swap(arr[i][j], arr[j][i]);}
     for(int i = 0; i<3; i++){
          for(int j = 0; j<3; j++){
               transposeArr[i][j] = arr[j][i];
          }
     }
}


int main(){
     int arr[3][3];

     // Init
     int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

     // Print - row wise
     for(int i = 0; i<3; i++){
          for(int j = 0; j<3; j++){
               cout << brr[i][j] << " ";
          }
          cout << endl;
     }

     // Print - col wise
     for(int i = 0; i<3; i++){
          for(int j = 0; j<3; j++){
               cout << brr[j][i] << " ";
          }
          cout << endl;
     }
     cout << endl;

     rowSum(brr);

     cout << endl;
     colSum(brr);

     cout << endl;
     bool search = linear_search(brr,12);
     cout << search;
     cout << endl;

     int crr[3][3] = {{5,6,9},{7,2,3},{3,4,12}};
     min_max(crr);

     cout << endl;
     
     int transposeArr[3][3];
     transpose(brr,transposeArr);

     for(int i = 0; i<3; i++){
          for(int j = 0; j<3; j++){
               cout << transposeArr[i][j] << " ";
          }
          cout << endl;
     }


     // Creating 2d array using vector of vector


     vector<vector<int>> v;

     vector<int> a{10,20,30};
     vector<int> b{14,15,16};
     vector<int> c{01,03,06};

     v.push_back(a);
     v.push_back(b);
     v.push_back(c);
     
     cout << "Printing vector of vector " << endl;

     for(int i = 0; i<v.size(); i++){
          for(int j = 0; j<v[0].size(); j++){
               cout << v[i][j] << " ";
          }
          cout << endl;
     }

     // Another way to define

     int row = 4;
     int col = 5;
     vector<vector<int>> vec(row,vector<int>(col,101));

       for(int i = 0; i<row; i++){
          for(int j = 0; j<col; j++){
               cout << vec[i][j] << " ";
          }
          cout << endl;
     }

     return 0;
}