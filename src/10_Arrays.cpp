#include <iostream>
#include <string>

using namespace std;

int main() {
    /* Arrays:
     * - type identifier[length] = {values}
     * - Series of elements of the same data type
     * - Composed of a number of indices one less than length
     * - Values are associated with indices starting at 0
     * - Number of values cannot exceed number of indices
     * - Empty indices are set to default values
     * - Number of indices may be left unspecified
     * - Unspecified index count will be set to number of initialized values
     * - Specific indexes may be accessed after initialization
     */
    string foods[] = {"Pasta", "Pizza", "Lasagna"}; // Initializes array without specifying indices count
    string drinks[3] = {"Soda", "Water", "Beer"}; // Creates array with indices specified in declaration

    for (int i = 0; i < 3; i++) {
        cout << foods[i] << "\n"; // Outputs specified index from array
    }
    for (int i = 0; i < 4; i++) {
        cout << drinks[i] << "\n";
    }

    /* Multidimensional Arrays:
     * - type indentifier[length][length] = {{values),{values}}
     * - Arrays may theoretically have infinite dimensions
     * - Adding dimensions greatly increases complexity of syntax
     * - Specific combinations of indexes may be accessed after initialization
     * - All other rules of normal arrays apply to multidimensional arrays
     */
    char letters[2][4] = { // Declares number of rows and number of columns
            {'A', 'B', 'C', 'D'}, // Assigns values in first row
            {'E', 'F', 'G', 'H'} // Assigns values in second row
    };

    for (int i = 0; i < 2; i++, cout << endl) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << " "; // Prints value of specified index combination
        }
    }
    
    return 0;
}
