#include<iostream>
using namespace std;

void push(int *arr, int size,int element){
     arr[size] =  element;

     for(int i = 0; i<=size; i++ ){
          cout << arr[i];
     }
}

int main(){
     // Creating array in cpp
     int a[5] = {1,2,3,4,5};

     // Creating vector in cpp
     // vector<int> arr = {1,2,3,4};

     // Size of array
     int size = sizeof(a)/sizeof(int);
     cout << "size " << size;

     int newElement;
     cout << "Enter the number that you want to push " << endl;
     cin >> newElement;


     push(a,size,newElement);

     for(auto ele:a){
          cout << ele << endl;
     }
     return 0;

}