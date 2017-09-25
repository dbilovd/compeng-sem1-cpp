#include <iostream>

using namespace std;

int main () {

    // Collect username or password
    string username, password;

    cout << "Enter a username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    // Check username and password
    if (username == "PSosu" && password == "PS1024") {
        cout << "Welcome Paulina Sosu\n";
        cout << "Physics        B\n";
        cout << "Chemistry      B+\n";
        cout << "Mathematics    B\n";
    }
    
    else if (username == "ETetteh" && password == "EY1025") {
        cout << "Welcome Emmanuel Tetteh\n";
        cout << "CS103:  A\n";
        cout << "CS225: B\n";
        cout << "IT: 204: B+\n";
    }
    
    else {
        cout << "Sorry you are not registered to use the application. See the registrar.\n";
    }

    return 0;
}