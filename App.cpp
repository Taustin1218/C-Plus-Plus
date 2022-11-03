// include pre-processor directive 
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"

// In C++, a namespace is a collection of related identifiers
// (functions, classes, objects, variables).

// The C++ standard library identifiers are defined in a namespace
// called std.

// A way to bring a specific identifier if the std namespace into
// a C++ application is with the help of the using declaration.
// using std::cout;

// A way to bring all the identifiers of the st namespace into a 
// C++ application as if they were declared gloabally is with the help of the
// using namespace statement
using namespace std;

int main() {
    // In order to use a C++ standard library identifier, like cout,
    // we need to specify that it belongs to the std namesace. One
    // way to do this is by using the scope resolution operator ::
    // std::cout << "Hello World!";
    // cout << "Hello World!";
    // output();
    // input();
    decisions1();
}