#include <iostream>

using namespace std;

int main() {
    /* Arithmetic Operators:
     * - Perform mathematical operations on operands
     * - Return number value;
     */
    int x = 200;
    int y = 100;
    int z = 50;

    int sum = y + z;
    int difference = x - y;

    int product = x * y;
    int quotient = x / y;

    int modulus = x % y;

    /* Compound Assignment Operators:
     * - Perform assigment and another operation simultaneously
     */
    x += y;
    x -= y;

    /* Comparison Operators
     * - Compare two operands
     * - Return true or false
     */
    bool a = x == y;
    bool b = x != y;

    bool c = x > y;
    bool d = x < y;
    bool e = x >= y;
    bool f = x <= y;

    /* Logical Operators:
     * - Correspond to boolean logical operations
     * - Return true or false
     */
    bool g = x < 200 && y < 200; // Logical AND
    bool h = x < 100 || y < 100; // Logical OR
    bool i = !(x < 100); // Logical NOT

    return 0;
}
