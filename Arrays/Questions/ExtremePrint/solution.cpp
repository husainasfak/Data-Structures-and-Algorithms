#include <iostream>
using namespace std;

void extreamPrint(int arr[], int size)
{
     int start = 0;
     int end = size - 1;
     cout << "running";
     while (end >= start)
     {
          if (start == end)
          {
               cout << "{" << arr[start] << "}";
          }
          else
          {
               cout << "{" << arr[start] << ", " << arr[end] << "}";
          }
          start++;
          end--;
     }
}

int main()
{
     //  Use two pointer method

     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

     int size = sizeof(arr) / sizeof(int);

     extreamPrint(arr, size);

     return 0;
}