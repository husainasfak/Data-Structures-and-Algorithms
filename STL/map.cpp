// Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.


#include<iostream>
#include<map>
using namespace std;

int main(){
     map<string,int> mapping;

     mapping["Four"] = 4;
     mapping["Five"] = 5;
     mapping["Six"] = 6;

     map<string, int>::iterator it = mapping.begin();

     while(it != mapping.end()){
          cout << "key : " << it->first << " Val : " << it->second << endl;
          ++it;
     }

     cout << "size " << mapping.size();
     return 0;
}

// T -  O(n)
// S - O(n)