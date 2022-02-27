#include<iostream>
using namespace std;

int addFiveNumbers ()
{
  double results = 0;

  for (int i = 0; i < 5; i++)
  {

    double currentNumber;
    cout << "Enter a number:\n";
    cin >> currentNumber;
    results += (double) currentNumber;
  }

  cout << "The result is: " + to_string(results) + "\n";
  return 0;
}

int addNNumbers()
{
  int numOfNumbers;
  cout << "Enter the number of numbers you want to calculate: ";
  cin >> numOfNumbers;

  double results = 0;

  for (int i = 0; i < numOfNumbers; i++)
  {
    double currentNumber;
    cout << "Enter a number: ";
    cin >> currentNumber;
    results += (double) currentNumber;
  }

  cout << "The sum of all " + to_string(numOfNumbers) + " numbers is: " + to_string(results) + "\n";
  return 0;
}

int main()
{
  // addFiveNumbers();
  addNNumbers();
  return 0;
}
