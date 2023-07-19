#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
     vector<int> v{2,3,4,5,6,7,8,9};
     int arr[] = {1,2,3,4,5,6,7,8,9};
     int size = sizeof(arr)/sizeof(int);

     if(binary_search(v.begin(),v.end(),5)){
          cout << "Found" << endl;
     }else{
          cout << "Not found" << endl;
     }

     if(binary_search(arr,arr+size,15)){
          cout << "Found" << endl;
     }else{
          cout << "Not found" << endl;
     }
}