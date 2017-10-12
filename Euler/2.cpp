#include <iostream>

using namespace std;

int main ()
{
    // Generate fabionaci sequence up to term not exceeding 4000000
    int start = 1,
        term = 2,
        sum = term; // 2 is the first even number.

    do {
        // Calculate new term,
        int newTerm = start + term;

        // 
        start = term;
        term = newTerm;

        // Increment sum if it's an even number
        if (newTerm % 2 == 0) {
            sum += newTerm;
        }
    } while (term <= 4000000);
    
    // Output
    cout << "The answer is: " << sum << endl;

    return 0;
}
