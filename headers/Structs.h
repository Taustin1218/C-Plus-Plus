// inlcude pre-processor direcives
#include <iostream>

// a struct is a collection of realted data (members)
// the members may be only field (variables)
// the members may be of different types
// declare a struct for a Person
struct Person
{
    // declare to members in the Person struct
    float heightInMeters;
    int weightInKilos;
};

// use C++ standard library namespace 
using namespace std;

/* this function uses the Person struct for purposes
* of displaying the values in its members */
void accessStructMembers(void) {
    // declare a Person struct
    struct Person person;

    // assign values to the members of the Person struct
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    // display values in members 
    cout << "Person's weight is " << person.weightInKilos << " kilograms." << endl;
    cout << "Person's height is " << person.heightInMeters << " meters." << endl;
}