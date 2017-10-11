#include <iostream>

using namespace std;

void printMessage();
string username = "ait",
	password = "cs103";
static int times = 1;

int main ()
{
	string userUsername, userPassword;
	
	do {
		cout << "Enter your username: ";
		cin >> userUsername;

		cout << "Enter your password: ";
		cin >> userPassword;

		if (userUsername == username && userPassword == password) {
			cout << "You have logged in successfully.";
		} else if (times == 3) {
			cout << "Sorry you don’t seem to have an account with us" << endl << endl;
                	break;
        	} else {
			printMessage();
		}
        	
		cout << endl << endl;

    	} while (userUsername != username || userPassword != password);

}

void printMessage()
{
	cout << "You have attempted logging in " << times << " times" << endl;
	cout << "The program will quit after 3 failed attempts" << endl;
	times++;
}
