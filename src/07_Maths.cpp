#include <iostream>
#include <cmath> // Includes mathematics library

using namespace std;

int main() {
    /* C Math Operations:
     * - Requires the "cmath" library
     * - Trigonometric functions
     * - Exponential
     * - Logarithmic functions
     * - Power functions
     * - Root functions
     * - Rounding functions
     * - Take numerical values as parameters
     * - Return numerical values
     */
    double x = 100;
    double y = 40;
    double z = 2;

    double a = 4.71;

    cout << sin(x) << endl; // Returns sine
    cout << cos(y) << endl; // Returns cosine
    cout << tan(z) << endl; // Returns tangent

    cout << exp(2) << endl; // Returns exponential
    cout << log(y) << endl; // Returns natural log

    cout << pow(y, z) << endl; // Returns X to the power of Y
    cout << sqrt(z) << endl; // Returns square root

    cout << round(a) << endl; // Retruns value rounded to the nearest integer
    cout << ceil(a) << endl; // Returns value rounded up to the nearest integer
    cout << floor(a) << endl; // Returns value rounded down to the nearest integer

    cout << abs(a); // Returns absolute value

    return 0;
}
