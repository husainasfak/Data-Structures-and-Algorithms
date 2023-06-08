// unordered_map is an associated container that stores elements formed by the combination of a key value and a mapped value. The key value is used to uniquely identify the element and the mapped value is the content associated with the key. Both key and value can be of any type predefined or user-defined. In simple terms, an unordered_map is like a data structure of dictionary type that stores elements in itself. It contains successive pairs (key, value), which allows fast retrieval of an individual element based on its unique key.

// Internally unordered_map is implemented using Hash Table, the key provided to map is hashed into indices of a hash table which is why the performance of data structure depends on the hash function a lot but on average, the cost of search, insert, and delete from the hash table is O(1). 



#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> umap; 

umap["ten"] = 10;
  umap["twenty"] = 20;
  umap["three"] = 3;
  for (auto x : umap)
    cout << x.first << " " << 
            x.second << endl;
}



// unordered_map vs map
// 1. The unordered_map key can be stored in any order. The map is an ordered sequence of unique keys 
// 2. Unordered_Map implements an unbalanced tree structure due to which it is not possible to maintain order between the elements. Map implements a balanced tree structure which is why it is possible to maintain order between the elements (by specific tree traversal)
// 3. The time complexity of unordered_map operations is O(1) on average.	The time complexity of map operations is O(log n)