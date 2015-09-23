#include <iostream>
#include <string>

using namespace std;

/*
 The order of functions matter. A function calling another needs to be declared first
*/

const int _power = 2;

void WriteHello()
{
  cout << "Hello World! ";
  cout << "I'm a C++ program";
}

unsigned long CalculateSize(int number, int power = 2)
{
  unsigned long total{ 1 };
  if (number == 0)
    return 0;

  for (int i = 0; i < number; i++)
  {
    total = total * power;
  }

  return total;
}

void InitialisingVariables()
{
  int a = 5;
  int b(2);
  int c{ 3 };

  int result;

  a = a + b;
  result = a - c;

  cout << result;
}

void DoCalculation()
{
  cout << "Max value of \
          how many bits: "; // Multiline is done by using '\'
  int number = 0;
  cin >> number;
  auto total = CalculateSize(number);
  cout << endl << "Maximum allowed: " << total;
  cin.get(); // need this otherwise still closes
}

void FirstString()
{
  string firstString;
  firstString = "This is a string";
  cout << firstString;
}

int main()
{
  FirstString();
  cin.get();

  return 0;
}
