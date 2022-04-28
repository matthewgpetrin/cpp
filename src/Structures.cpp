#include <iostream>

using namespace std;

int main() {
    // Structures
    struct { // Declares a structure - Groups members into one variable
        string make = "Tesla"; // Initializes a member
        string model = "Model S";
        int year = 2020;
    } car;

    cout << car.make << " " << car.model << " " << car.year << endl; // Returns specified members from struct

    struct {
        string food;
        float price;
    } food1, food2, food3; // Declares multiple struct variables with same members

    food1.food = "Hamburger"; // Assigns value to member in specified struct variable
    food1.price = 5.99;
    food2.food = "Hotdog";
    food2.price = 3.99;
    food3.food = "Pizza";
    food3.price = 4.99;

}
