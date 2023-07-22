#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
  
  
int peak_element(vector<int> v){
     int start = 0;
     int end = v.size() - 1;
     int mid = start + (end - start)/2;

       while(start<end){
            if(v[mid] < v[mid+1]){
               // line number A where n1<n2<n3
                start = mid+1;
            }else{
                end = mid;
            }
            mid = start + (end -  start)/2;
        }
        return start;
}
  
int main(){
  
vector<int> v{0,10,5,2};

int index = peak_element(v);
  cout << "Peak element at " << index;
return 0;
  
}