#include <iostream>     // std::cout
#include <algorithm>    // std::copy_if

using namespace std;

int main ()
{
    long number = 600851475143;
    // int number = 13195;

    /*
        // Declare array variable
        bool numbers[number + 1];

        // Set all fields of the numbers as true
        // memset(numbers, true, sizeof(numbers));

        for (int i = 2; i <= number; i++) {
            if (numbers[i] == true) {
                for (int j = (i + i); j < number; j += i) {
                    numbers[j] = false;
                }
            }
        }

        for (int i = 2; i <= number; i++) {
            if (numbers[i]) {
                cout << "Prime: " << i << endl;
            }
        }
    */

    // Prime factor of number
    int factor = 2;

    // Variable to hold largest factor
    int largestFactor = 1;

    // Since 2 is the only even prime number, process it seperately
    if (number % 2 = 0) {
        largestFactor = 2;

        number = number / 2;
        while (number % 2 == 0) {
            number = number / 2;
        }
    }

    // After 2 start processing from 3
    factor = 3;

    // Factorise number until it gets to 0
    while (number > 1) {

        // Check if current number is a factor of number
        if (number % factor == 0) {

            // Set current factor as largest factor
            largestFactor = factor;

            // Set number as quotient of dividing number by factor
            number = number / factor;
            
            // Divide number until, factor is no longer a factor of number
            while (number % factor == 0) {
                number = number / factor;
            }
        }

        // Increment factor by 2 (considering only even numbers)
        factor += 2;
    }

    cout << largestFactor << endl;
}