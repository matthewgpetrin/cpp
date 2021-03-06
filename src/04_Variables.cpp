#include <iostream>

using namespace std;

int main() {
    /* Identifiers:
     * - Composed of sequences of letters, digits, and underscores
     * - Identify variables and methods
     * - Cannot use reserved keywords
     * - Case sensitive
     */

    /* Fundemental Data Types:
     * - Basic types implemented directly into the language
     * - Character:
     *      - char identifier = 'character'
     *      - Single characters
     * - Numerical Integer:
     *      - int indentifier = integer
     *      - Whole numbers
     * - Floating Point:
     *      - float identifier = number
     *      - Real numbers with varying levels of precision
     * - Boolean:
     *      - bool identifier = true/false
     *      - True or false (1 or 0)
     * - Integers may be signed or unsigned
     * - Basic types are stored as binary with a RAM address
     */
    char a = '$'; // Initialization of character
    bool b = true; // Initialization of boolean

    int x = 123; // Initialization of integer
    float y = 123.456; // Intialization of floating point
    double z = 123.456789; // Intiialization of double precision floating point

    /* Variable Syntax:
     * - type identifier = value
     * - Declaration - Declares the variable identifier and type
     * - Assignment - Assigns the variable a value
     * - Reassignment - Assings the variable a new value
     * - Initialization - Declaration and assignment together
     */
    int m; // Declaration
    m = 20; // Assignment
    m = 30; // Reassignment
    int n = 20; // Initialization

    /* Constant Expressions:
     * - const type identifier = value
     * - Makes a variable read only
     */
    const int c = 20; // Initialization of read only variable

    return 0;
}