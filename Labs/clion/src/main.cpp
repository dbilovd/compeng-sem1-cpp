# include <iostream>

using namespace std;

int main () {

    cout << "Hello, what's your name? ";

    string name;
    cin >> name;

    cout << "Hi, " << name << ", What's your focus for the day?" << endl;

    string focus;
    cin >> focus;

    cout << "Have a lovely day!" << endl << "Don't forget " << focus << endl;

    return 0;

}