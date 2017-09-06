#include <iostream>
using namespace std;

int test(int x)
{
	return x + 2;
}

void testAutoCast()
{
	double d = 10.4567;
	int i = 10;
	d = d/i;
	i = d * i;
	cout << "d: " << d << "\n";
	cout << "i: " << i << "\n"; 
}

int main ()
{
	testAutoCast();
	return 0;
	// std::cout << "Hello World!\n";
	// float a = 6.34;
	
	// cout << a;
	
	// cout << test(2);
	cout << "Char: " << sizeof(char); // << endline;
	cout << "Int: " << sizeof(int); // << endline;
	cout << "Boolean: " << sizeof(bool); //  << endline;
	cout << "Double: " << sizeof(double); // << endline;
}
