#include <iostream>

using namespace std;

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

double calculate (double *res)
{
    // Welcome message
    int a, b;
    char opt;

    // Accept a, opt and b
    if (res == NULL) {
        a = res;
    } else {
        cout << "Enter first number: ";
        cin >> a;
    }

    cout << "Enter operator to run: ";
    cin >> opt;

    cout << "Enter second number: ";
    cin >> b;

    switch (opt) {
        case '+' :
            res = (double *) a + b;
            break;
        
        case '-' :
            res = (double *) a - b;
            break;

        case '/' :
            res = (double *) a / b;
            break;

        case '*' :
            res = (double *) a * b;
            break;

        case '%' :
            res = (double *) a % b;
            break;
    }

    cout << a << " " << opt << " " << b << " = " << res << endl;

    return res;
}

int main ()
{
    double res;
    double *resLive = &res;
    resLive = NULL;

    do {
        res = calculate(resLive);
    } while (performAnotherCalculation());

    return 0;
}