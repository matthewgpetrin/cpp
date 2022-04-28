#include <iostream>
#include <string> // Includes string library

using namespace std;

int main() {
    /* Strings:
     * - Declared by "string" keyword
     * - Not primitive data types
     * - Sequence of characters
     * - Requires the "string" library?
     * - May be concatenated using the addition operator
     */
    string firstName = "Matthew"; // Intializes string variable
    string lastName = "Petrin";
    cout << "My full name is " + firstName + " " + lastName << ". \n"; // Outputs concatenated strings

    /* String Methods:
     * - Called using [indentifier].[method]
     * - Performs operations on the specified string
     * - Append - Appends data to the end of a string
     * - Length - Returns the length of the specified string
     */
    string fullName = firstName.append(" " + lastName); // Initializes string with appended data
    cout << "My name is " << fullName.length() - 1 << " letters long. \n"; // Outputs length of given string

    /* String Indices:
     * - Characters in strings are assigned indices starting at 0
     * - Indices may be returned or reassigned
     */
    cout << "The first letter of my name is " << fullName[0] << ". \n"; // Outputs the first character in given string
    fullName[0] = 'B'; // Reassigns first character in string
    cout << "I have changed the first letter in my name to B. \n";
    cout << "My new name is " << fullName << ". \n"; // Outputs string with newly reassigned character

    /* Get Line Function:
     * - Called using getline()
     * - Requires string library
     * - Retrieves an entire line of data
     * - Does NOT terminate on whitespaces
     * - Will treat new line character as a line of data
     */
    cout << "What is your full name? \n";
    getline(cin, fullName); // Accepts full line of input text
    cout << "Hello " + fullName + ". \n";

    return 0;
}
