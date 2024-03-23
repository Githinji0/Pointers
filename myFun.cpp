#include <iostream>
using namespace std;

void myFunction() {
    int var = 20;   // actual variable declaration
    int *ptr;       // pointer variable 

    ptr = &var;     // store address of var in pointer variable

    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}

int main() {
    myFunction();
    return 0;
}
