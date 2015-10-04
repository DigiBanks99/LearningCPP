// LearningCPPLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LearningCPPLib.h"

namespace LearnignCPP
{
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

  long long CalculateSize(int number, int power = 2)
  {
    long long total{ 1 };
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

  int Casting()
  {
    int i;
    float f = (float)3.14;
    i = (int)f;

    // Can also be done as
    f = (float)3.14;
    i = int(f);
    return i;
  }

  string GetInput()
  {
    string input;
    getline(cin, input);
    return input;
  }

  int GetIntInput()
  {
    string inputString("1204");
    int inputInt;
    stringstream(inputString) >> inputInt; // interprates string as int
    return inputInt;
  }

  void ForEach()
  {
    string hello{ "Hello!" };
    for (char c : hello)
    {
      cout << "[" << c << "]";
    }
    cout << "\n";
  }

  void AddByRef(int& a, int& b)
  {
    a = a + b;
    b = 0;
  }

  // Generic methods
  template <class T>
  T sum(T a, T b)
  {
    T result;
    result = a + b;
    return result;
  }

  void increment_all(int* start, int* stop)
  {
    int * current = start;
    while (current != stop)
    {
      ++(*current); // increment value pointed
      ++current; // increment pointer
    }
  }

  void print_all(const int* start, const int* stop)
  {
    const int * current = start;
    while (current != stop)
    {
      cout << *current << "\n";
      ++current; // increment pointer
    }
  }

  Polygon::Polygon()
  {
    set_values(1, 1);
  }

  Polygon::Polygon(int a, int b)
  {
    set_values(a, b);
  }

  int Polygon::area()
  {
    return width * height;
  }

  void Polygon::set_values(int x, int y)
  {
    width = x;
    height = y;
  }

  int Rectangle::_count = 0; // Static members are declared outside the class decleration

  Rectangle::Rectangle() : Polygon(1, 1)
  {
    _count++;
  }

  Rectangle::Rectangle(int a, int b)
  {
    set_values(a, b);
    _count++;
  }

  int Rectangle::GetCount()
  {
    return _count;
  }
}
