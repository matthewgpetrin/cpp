#include <iostream>

using namespace std;

int main() {
    /* While Loops:
     * - while (condition) {statement}
     * - Executes statement repeatedly as long as condition is true
     */
    int i = 0;
    while (i < 10) { // Declaration of loop and condition
        cout << i << "\n"; // Statement to be executed
        i++;
    }

    /* Do While Loops:
     * - do {statement} while (condition)
     * - Executes statement at least once regardless of condition
     * - Reexecutes statment as long as condition is true
     */
    int i = 11;
    do { // Declaration of do while loop
        cout << i << "\n"; // Statement to be executed
        i++;
    } while (i < 10); // Declaration of condition

    /* For Loops:
     * - for (initialization; condition; increment) {statement}
     * - Initialization - Executed at beginning of loop
     * - Condition - Must be true for statement to reexecute
     * - Increment - Executes after each completion of the statment
     */
    for (int i = 0; i < 5; i++) // Declaration of loop and parameters
        cout << i << "\n"; // Statement to be executed

    /* Jump Statements:
     * - Break:
     *      - break
     *      - Leaves a loop regardless of condition status
     * - Continue:
     *      - continue
     *      - Skips the rest of the statement during the current iteration
     * - Go To
     *      - goto
     *      - Makes an absolute jump to a specified point in the program
     */
    for (int i = 0; i < 5; i++) {
        if (i == 1) {
            cout << "Skipping loop \n";
            continue; // Skips one iteration of the loop
        }
        if (i == 3) {
            cout << "Breaking loop \n";
            break; // Stops all iterations of the loop
        }
        cout << i << "\n";
    }

    return 0;
}
