#include <iostream>

using namespace std;

int main() {
    // Pointers
    string food = "Pasta";
    string *ptr = &food; // Pointer denoted by * operator - Stores memory address of reference as its value

    cout << ptr << endl; // Outputs the memory address of pointed variable
    cout << *ptr << endl; // Dereference operator returns value of memory address

    *ptr = "Lasagna"; // Redefines the ORIGINAL variable pointed to
    cout << *ptr << endl;
    
    return 0;
}
