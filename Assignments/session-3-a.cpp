#include <iostream>

using namespace std;

int main () {

    // Declare variables
    double savings, expenditure;

    // Fetch values from users
    cout << "Enter savings\n";
    cin >> savings;

    cout << "Enter expendure\n";
    cin >> expenditure;

    // If saving is at least greater than expenditure
    if (savings > expenditure) {
        // Output solvent
        cout << "Solvent\n";

        // Decrease savings by expenditure
        savings -= expenditure;

        // Set expenditure to 0
        expenditure = 0;
    } else {
        cout << "Bankrupt\n";
    }

    return 0;
}