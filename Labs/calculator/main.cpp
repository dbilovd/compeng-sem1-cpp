#include <iostream>
#include "functions.h"
#include "Calculate.h"

using namespace std;

/**
 * Main function
 *
 */
int main ()
{
    // Declare variable to store result of calculations
    double res;

    // Declare a nullpointer to our results tvariable
    double* resPtr = NULL;

    do {
        // Run the calculate function and save result returned
        res = calculate(resPtr);

        // Update pointer address to variable
        resPtr = &res;

    } while (performAnotherCalculation()); // Perform further calculations until the user says 'stop'

    // Return for main
    return 0;
}