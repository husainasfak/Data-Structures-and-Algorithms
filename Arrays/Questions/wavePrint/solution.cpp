#include<iostream>
#include<vector>

using namespace std;

void col_wave(vector<vector<int>> arr){
     int row = arr.size();
     int col = arr[0].size();
     for(int column = 0; column<col; column++){
          if((column & 1) == 0){
               for(int r = 0; r<row; r++){
                    cout << arr[r][column] << " ";
               }
          }else{
               for(int r = row-1; r>=0; r--){
                    cout << arr[r][column] << " ";
               }
          }
          
     }
}

void row_wave(vector<vector<int>> arr){
     int row = arr.size();
     int col = arr[0].size();

     for(int r = 0; r<row; r++){
          if((r & 1) == 0){
               for(int c = 0; c<col; c++){
                    cout << arr[r][c] << " ";
               }
          }else{
               for(int c = col-1; c>=0; c--){
                    cout << arr[r][c] << " ";
               }
          }
     }
}
int main(){
     vector<vector<int>> arr{
          {1,2,3,4},
          {5,6,7,8},
          {9,10,11,12}
     };

     // col wise wave print
     col_wave(arr);
     cout << endl;
     // row wise wave print 
     row_wave(arr);
     return 0;
}