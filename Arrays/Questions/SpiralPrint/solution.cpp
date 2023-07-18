#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralPrint(vector<vector<int>>& matrix){
     vector<int> ans;
     int rowSize = matrix.size();
     int colSize = matrix[0].size();
     int totalElemenets = rowSize * colSize;

     int startRow = 0;
     int endRow = rowSize - 1;
     int startCol = 0;
     int endCol = colSize - 1;

     int elementCount = 0;

     while(elementCount < totalElemenets){
          // Print Starting row
          for(int i=startCol;  i<=endCol && elementCount<totalElemenets; i++){
               ans.push_back(matrix[startRow][i]);
               elementCount++;
          }

          startRow++;

          // Print ending col
          for(int i=startRow;  i<=endRow && elementCount<totalElemenets; i++){
               ans.push_back(matrix[i][endCol]);
               elementCount++;
          }

          endCol--;

          // Print ending row
          for(int i=endCol;  i>=startCol && elementCount<totalElemenets; i--){
               ans.push_back(matrix[endRow][i]);
               elementCount++;
          }

          endRow--;

          // Print starting col
          for(int i=endRow;  i>=startRow && elementCount<totalElemenets; i--){
               ans.push_back(matrix[i][startCol]);
               elementCount++;
          }

          startCol++;
         
     }

     return ans;

}






int main(){
     vector<vector<int>> v{
          {1,2,3,4,5,6},
          {7,8,9,10,11,12},
          {13,14,15,16,17,18},
          {19,20,21,22,23,24},
          {25,26,27,28,29,30}
     };

     vector<int> output = spiralPrint(v);

     for(auto x:output){
          cout << x << " ";
     }
     return 0;
}