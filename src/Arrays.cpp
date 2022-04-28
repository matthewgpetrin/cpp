#include <iostream>
#include <string>

using namespace std;

int main() {
    // Arrays
    string cars[4] = {"Volvo", "Tesla", "Ford", "Mazda"}; // Stores multiple indexed values in one variable
    cout << cars[0]; // Returns index 0 from array

    string foods[] = {"Pasta", "Pizza", "Lasagna"}; // Create array with indices for each specified element
    string drinks[4] = {"Soda", "Water", "Beer"}; // Creates array with indices specified in declaration

    for (int i = 0; i < 3; i++) {
        cout << foods[i] << "\n"; // Returns specified index from array
    }
    for (int i = 0; i < 4; i++) {
        cout << drinks[i] << "\n";
    }

    // Multidimensional Arrays
    char letters[2][4] = { // Declares number of rows and number of columns
            {'A', 'B', 'C', 'D'},
            {'E', 'F', 'G', 'H'}
    };

    for (int i = 0; i < 2; i++, cout << endl) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << " "; // Prints value of specified indices
        }
    }

    int numbers[2][2][2] = { // Arrays can have an infinite number of dimensions
            {
                    {1, 2},
                    {3, 4},
            },
            {
                    {5, 6},
                    {7, 8}
            }
    };

    return 0;
}
