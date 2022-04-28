#include <iostream>

using namespace std;

int main() {
    // While Loops
    int i = 0;

    while (i < 10) { // Loop body executes as long as condition is true
        cout << i << "\n";
        i++; // Increments i by 1
    }

    // Do While Loops
    do { // Execute once regardless of whether condition is false
        cout << i << "\n";
        i++;
    } while (i < 10); // Condition

    // For Loops
    for (int i = 0; i < 5; i++) { // X is executed once before loop - Y is loop condition - Z executes after each loop
        cout << i << "\n";
    }

    // Break and Continue
    for (int i = 0; i < 5; i++) { // X is executed once before loop - Y is loop condition - Z executes after each loop
        if (i == 1) {
            cout << "Skipping loop \n";
            continue; // Skips one iteration of the loop
        }
        if (i == 3) {
            cout << "Breaking loop \n";
            break; // Ends the loop
        }
        cout << i << "\n";
    }

    return 0;
}
