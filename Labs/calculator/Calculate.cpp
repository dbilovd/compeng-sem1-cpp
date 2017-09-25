#include <iostream>
#include "Calculate.h"

using namespace std;

/**
 * Constructors
 */
// new Calculate(+, 10, 5)
Calculate::Calculate(double* resPtr, char operation, double firstNumber, double secondNumber) : 
    resPtr(resPtr), op(operation), a(firstNumber), b(secondNumber)
{
}

// new Calculate(+, 10)
Calculate::Calculate(double* resPtr, char operation, double firstNumber) : 
    resPtr(resPtr), op(operation), a(firstNumber), b(0)
{
}

// new Calculate()
Calculate::Calculate(double* resPtr) : 
    resPtr(resPtr), op('+'), a(0), b(0)
{
}

/**
 * Destructor
 */
//  ~Calculate() {
//  }

// Run
double Calculate::run()
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

// Add
double Calculate::add(double a, double b)
{
    return a + b;
}

// Sub
double Calculate::sub(double a, double b)
{
    return a - b;
}

// Multiply
double Calculate::multiply(double a, double b)
{
    return a * b;
}

// Divide
double Calculate::divide(double a, double b)
{
    return a / b;
}

// Modulo
int Calculate::modulo(double a, double b)
{
    return (int) a % (int) b;
}
