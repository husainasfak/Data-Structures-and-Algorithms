#include <iostream>
using namespace std;

void usingTemp(int &a, int &b)
{
     int temp = a;
     a = b;
     b = temp;
}

void usingXOR(int &a, int &b)
{
     // XOR return true or 1 when operands are different otherwise it returns false of 0;

     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
}

void usingPlusMinus(int &a, int &b)
{
     a = a + b;
     b = a - b;
     a = a - b;
}

int main()
{

     int num1 = 10;
     int num2 = 20;

     cout << "{" << num1 << ", " << num2 << "}" << endl;
     // Swap methods

     // * 1. Using temporary variable
     usingTemp(num1, num2);
     cout << "{" << num1 << ", " << num2 << "}";

     //  * 2. Using XOR Operator
     usingXOR(num1, num2);
     cout << "{" << num1 << ", " << num2 << "}";

     // * 3. Using + and -
     usingPlusMinus(num1, num2);
     cout << "{" << num1 << ", " << num2 << "}";

     return 0;
}