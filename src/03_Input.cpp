#include <iostream>

using namespace std;

int main() {
    /* Console Input:
     * - cin >> data
     * - Is a predefined object
     * - Instance of ostream class
     * - Followed by extraction operator (>>)
     * - Terminates given space input
     */
    int name;
    cout << "What is your name? ";
    cin >> name; // Takes user input from keyboard
    cout << "Hello, " << name << "! \n";

    return 0;
}