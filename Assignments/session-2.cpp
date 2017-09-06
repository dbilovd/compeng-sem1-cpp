#include <iostream>

using namespace std;

/**
 * Final Results:
 *
 * d = 24
 * f = 6
 * e = 0
 * g = 1.5
 */

int main ()
{
    // Declare int variables
    int a, b, c;

    // Declare float variables
    float d, e, f, g;

    // Assign values of int values
    a = 4;
    b = 6;
    c = -3;

    // 1. d = 3a + -ac
    d = (float) 3 * a + (-a * c);

    cout << "d = " << d << endl;

    // 2. f = d/a
    f = (float) d / a;

    cout << "f = " << f << endl;

    // 3. e = f + 2c
    e = (float) f + 2 * c;

    cout << "e = " << e << endl;

    // 4. g = f/a;
    g = (float) f / a;

    cout << "g = " << g << endl;

    // End
    return 0;
}