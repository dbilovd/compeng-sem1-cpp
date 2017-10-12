#include <iostream>

using namespace std;

int main ()
{
    int sum = 0;

    // 
    for (int i = 1; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum += i;
        }
    }

    cout << "The sum of all multiples of either 3 or 5 below 1000 is " << sum << endl;

    return 0;
}