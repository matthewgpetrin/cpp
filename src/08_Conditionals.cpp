#include <iostream>

using namespace std;

int main() {

    /* If Else Statements:
     * - If:
     *      - if (condition) {statement}
     *      - Executes statment if given condition is true
     * - Else:
     *      - else {statement}
     *      - Executes block if all previous conditions are false
     * - Else If:
     *      else if (condition) {statement}
     *      - Executes statement if given condition is true AND all previous conditions are false
     */
    int time = 16;

    if (time < 12) { // Executes if condition is true
        cout << "Good morning. \n";
    } else if (time < 18) { // Executes if condition is true and all previous conditions are false
        cout << "Good afternoon. \n";
    } else { // Executes if all previous conditions are flase
        cout << "Good evening. \n";
    }

    /* Switch Statements:
     * - switch (parameter) {case constant:statement default:statement}
     * - Compares parameter to a set of constant expressions
     * - Executes statement if constant is equal to given parameter
     * - Default case executes if no constants match input parameter
     * - Cases are limited to constant expressions
     */
    int day = 4;
    switch (day) { // Declares switch statement and input parameter
        case 1: // Executes following block if expression is equal to input parameter
            cout << "Sunday \n";
            break;
        case 2:
            cout << "Monday \n";
            break;
        case 3:
            cout << "Tuesday \n";
            break;
        case 4:
            cout << "Wednesday \n";
            break;
        case 5:
            cout << "Thursday \n";
            break;
        case 6:
            cout << "Friday \n";
            break;
        default: // Executes if all other cases are false
            cout << "Saturday \n";
    }

    return 0;
}
