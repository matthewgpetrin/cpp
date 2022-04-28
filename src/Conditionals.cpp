#include <iostream>

using namespace std;

int main() {

    /* If Else Statements:
     * - If - Executes block if given condition is true
     * - Else - Executes block if all previous conditions are false
     * - Else If - Executes block if given condition is true AND all previous conditions are false
     */
    int time = 16;

    if (time < 12) { // Executes if condition is true
        cout << "Good morning. \n";
    } else if (time < 18) { // Executes if condition is true and all previous conditions are false
        cout << "Good afternoon. \n";
    } else { // Executes if all previous conditions are flase
        cout << "Good evening. \n";
    }

    // Switch Statements
    int day = 4;

    switch (day) { // Compares input to each case
        case 1:
            cout << "Sunday \n";
            break; // Ends the switch comparisons
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
