#include <iostream>
#include "functions.h"

using namespace std;


/**
 * Confirm new calculation
 * This functions askes the user if he wants to run another calculation.
 * If he doesn't want to, the false is returned and the program ends
 * (in main)
 */
 bool performAnotherCalculation ()
 {
     cout << "Do you want to perform another calculation (y or n)?\n";
     
     char answer;
     cin >> answer;
 
     switch (answer) {
         case 'y' :
             return true;
 
         case 'n' :
             return false;
 
         default :
             cout << "You entered a wrong value!\n";
             return false;
     }
 }
 
 /**
  * Calculate
  * This function handles the calculations to be done
  */
 double calculate (double* resPtr)
 {
     // Declare variables to hold first number, second number and result
     double a, b, result;
 
     // Another variable to hold the operation to be performed
     char opt;
 
     // Accept first number from user or use result of previous calculations if any
     // Check if pointer to our result variable is not a nullpointer
     if (resPtr != NULL) {
         // Dereference pointer and save value as our first number
         a = *resPtr;
     } else {
         // If pointer is null, request for number from user
         cout << "Enter first number: ";
         cin >> a;
     }
 
     // Ask for arithemetic operation to be done on numbers
     cout << "Enter operator to run: ";
     cin >> opt;
 
     // Ask for second number
     cout << "Enter second number: ";
     cin >> b;
 
     // Based on the operation provided, perform the calculation and update the value
     // of result
     switch (opt) {
         case '+' :
             result = a + b;
             break;
         
         case '-' :
             result = a - b;
             break;
 
         case '/' :
             result = a / b;
             break;
 
         case '*' :
             result = a * b;
             break;
 
         case '%' :
             result = (int) a % (int) b;
             break;
     }
 
     // Output the result
     cout << a << " " << opt << " " << b << " = " << result << endl;
 
     // Return value of result
     return result;
 }