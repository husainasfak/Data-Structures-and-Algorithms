#include <iostream>
#include <set>
 
//  Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.
int main()
{
    std::set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
    std::cout << '\n';
    return 0;
}