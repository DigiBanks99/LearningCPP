#include "Program.h"

using namespace LearnignCPP;
using namespace std;

string to_string(LearnignCPP::Rectangle rect)
{
  if (&rect == nullptr)
    return "Null";

  return std::to_string(rect.area());
}

template <class T>
class mypair
{
  T values[2];
public:
  mypair(T, T);
  T* GetValues();
  string ToString();
};

template <class T>
mypair<T>::mypair(T first, T second)
{
  values[0] = first;
  values[1] = second;
}

template <class T>
T* mypair<T>::GetValues()
{
  return values;
}

template <class T>
string mypair<T>::ToString()
{
  string retString = "";
  for (int i = 0; i < 2; i++)
  {
    T value = GetValues()[i];
    string valueString = "";
    if (retString.length() > 0)
      valueString = "," + to_string(value);
    else
      valueString = to_string(value);
    retString += valueString;
  }

  return retString;
}

string joinDontModify(const string& a, const string& b) // won't create copies of values, but can't modify them internally
{
  return a + b;
}

int main()
{
  cout << "Output sentence" << endl;
  cout << GetIntInput() << endl;
  ForEach();

  int a = 3, b = 5;
  cout << "a: " << a << "\n" << "b: " << b << endl;
  AddByRef(a, b);
  cout << "a: " << a << "\n" << "b: " << b << endl;

  string x = "Hello ", y = "World!";
  cout << "x: " << x << "\n" << "y: " << y << endl;
  string z = joinDontModify(x, y);
  cout << "z: " << z << endl;

  cout << endl;

  int numbers[] = { 10,20,30 };
  increment_all(numbers, numbers + 3);
  print_all(numbers, numbers + 3);

  cout << endl;

  LearnignCPP::Rectangle rect(3, 4);
  cout << "rect area: " << rect.area() << endl;
  cout << "Rectangle count: " << LearnignCPP::Rectangle::GetCount() << endl;
  LearnignCPP::Rectangle rectb(5, 6);
  cout << "rectb area: " << rectb.area() << endl;
  cout << "Rectangle count: " << LearnignCPP::Rectangle::GetCount() << endl;
  LearnignCPP::Rectangle rectc;
  cout << "rectc area: " << rectc.area() << endl;
  cout << "Rectangle count: " << LearnignCPP::Rectangle::GetCount() << endl;
  rectc.set_values(4, 7);
  cout << "rectc area: " << rectc.area() << endl;

  cout << endl;

  mypair<int> myIntObj(115, 36);
  cout << "mypair<int>" << myIntObj.ToString() << endl;
  mypair<double> myDoubleObj(115.02, 36.77);
  cout << "mypair<double>" << myDoubleObj.ToString() << endl;
  LearnignCPP::Rectangle rect1(3, 4);
  LearnignCPP::Rectangle rect2(40, 50);
  mypair<LearnignCPP::Rectangle> myRectObj(rect1, rect2);
  cout << "mypair<Rectangle>" << myRectObj.ToString() << endl;

  cout << "Press any key to exit...";
  cin.get();

  return 0;
}