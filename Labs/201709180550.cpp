# include <iostream>

using namespace std;

int main ()
{
    bool a = true,
        b = false;

    if (a ^ b) {
        cout << "a ^ b = True\n";
    } else {
        cout << "a ^ b = False\n";
    }

    if (a ^ a) {
        cout << "a ^ a = True\n";
    } else {
        cout << "a ^ a = False\n";
    }

    if (b ^ b) {
        cout << "b ^ b = True\n";
    } else {
        cout << "b ^ b = False\n";
    }

    return 0;
}