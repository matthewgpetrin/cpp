#include <iostream>

using namespace std;

int main() {
    // References
    string food = "Pasta"; // Variable
    string &meal = food; // Reference to variable - Shares memory address with original variable

    cout << food << endl;
    cout << meal << endl; // Outputs reference value
    cout << &meal << endl; // Outputs reference memory address

    // I have no idea what the point of a reference is
    return 0;
}
