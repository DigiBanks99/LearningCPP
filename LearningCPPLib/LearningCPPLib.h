// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LEARNINGCPPLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LEARNINGCPPLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LEARNINGCPPLIB_EXPORTS
#define LEARNINGCPPLIB_API __declspec(dllexport)
#else
#define LEARNINGCPPLIB_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>
#include <sstream>
#include "stdafx.h"

namespace LearnignCPP
{
  LEARNINGCPPLIB_API void WriteHello();
  LEARNINGCPPLIB_API long long CalculateSize(int, int);
  LEARNINGCPPLIB_API void InitialisingVariables();
  LEARNINGCPPLIB_API void DoCalculation();
  LEARNINGCPPLIB_API void FirstString();
  LEARNINGCPPLIB_API int Casting();
  LEARNINGCPPLIB_API int GetIntInput();
  LEARNINGCPPLIB_API void ForEach();
  LEARNINGCPPLIB_API void AddByRef(int&, int&);
  LEARNINGCPPLIB_API void increment_all(int*, int*);
  LEARNINGCPPLIB_API void print_all(const int*, const int*);

  template <class T>
  LEARNINGCPPLIB_API T sum(T a, T b);

  class LEARNINGCPPLIB_API Polygon
  {
  protected:
    int width;
    int height;
  public:
    Polygon();
    Polygon(int, int);
    int area();
    void set_values(int, int);
  };

  class LEARNINGCPPLIB_API Rectangle : public Polygon
  {
  private:
    static int _count;
  public:
    Rectangle();
    Rectangle(int, int);
    static int GetCount();
  }; // Always end class decelration with ;
}
