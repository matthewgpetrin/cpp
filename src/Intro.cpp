/* Directives:
 * - Begin with #
 * - Interpreted before compilation of the program
 */

/* Headers:
 * - Import using #include
 * - Add predefined functionalities to code
 * - Can be .h files or standard libraries
 */
#include <iostream> // Importation of input output stream library

/* Namespaces:
 * - Declared using "using"
 * - Allows for unqualified use of objects
 * - Explicit qualification prevents name collision
 * - Using namespaces considered bad practice
 */
using namespace std; // Declaration of standard namespace

/* Main Function:
 * - Special function used in all C++ programs
 * - Function called when program is executed
 */
int main() { // Declaration of main function
    cout << "Hello, World!"; // Outputs data to terminal

    return 0; // Returns int to end function
}