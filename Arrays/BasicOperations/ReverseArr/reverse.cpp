#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int size)
{
     int start = 0;
     int end = size - 1;

     while (end >= start)
     {
          swap(arr[start], arr[end]);
          start++;
          end--;
     }
}

int main()
{

     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

     int size = sizeof(arr) / sizeof(int);

     // Using two pointers
     reverse(arr, size);

     for (auto ele : arr)
     {
          cout << ele << ", ";
     }

     return 0;
}