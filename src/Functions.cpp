#include <iostream>

using namespace std;

void hello() { // Declaration of function type void - Returns no value
    cout << "Hello, World! \n";
}

void print(string x) { // Declaration of function with input parameter
    cout << x << endl;
}

void country(string y = "USA") { // Declaration of function with default parameter - Will be used if no input is given
    cout << y << endl;
}

int sum(int a, int b, int c) {
    return a + b + c; // Returns value of type function
}

double sum(double a, double b,
           double c) { // Overloaded function with same name but different parameters - Different signatures
    return a + b + c;
}

void
swap(int &a, int &b) { // Declaration of function if input parameters as references - Allows function to modify original
    int c = a + b;
    a = c - a; // Redefines reference parameter - Redefines original variable
    b = c - a;
}

void printNumbers(int numbers[], int length) { // Declaration of function with array as parameters
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << endl;
    }
}

int main() {
    hello(); // Calls function
    print("This is a string."); // Calls function and provides input parameter

    country(); // Calls function and uses default parameter
    country("Mexico");

    cout << sum(3, 5, 1) << endl; // Outputs return value of function
    cout << sum(3.4, 4.3, 2.1) << endl; // Outputs return of overloaded function

    int a = 10;
    int b = 20;

    cout << "A is " << a << " and B is " << b << endl;
    swap(a, b); // Calls function and passes reference parameters
    cout << "A is " << a << " and B is " << b << endl;

    int numbers[] = {10, 20, 30, 5};
    printNumbers(numbers, 4); // Calls function with array input parameter

    return 0;
}

