#include <iostream>
using namespace std;

// Pass by value example:
void swapVal(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside swapVal:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    //the input will be swapped inside here but it will remain in this copy 
    //will not change the output values in the main function 
}

// Pass by reference:
void swapRef(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "Original values:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << "Pass by value:" << endl;
    swapVal(num1, num2);

    cout << "After swapped By Value:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    //  a and b were only copies so no changes in main function's variable value.
    //outputs num1 = 5 & num2 = 10 
    cout << "Pass by reference:" << endl;
    swapRef(num1, num2);

    cout << "After swapped By Reference:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
   // a and b will change the original value since it's using & and therefore 
    //values will get swapped even in main function.
    return 0;
}