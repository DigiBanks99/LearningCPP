#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LearnignCPP;

namespace LearningCPPTests
{
  TEST_CLASS(ProgramTest)
  {
  public:

    TEST_METHOD(TextCalculateSize)
    {
      int expectedValue = 9;
      int calculatedSize = CalculateSize(2, 3);
      Assert::AreEqual(expectedValue, calculatedSize, L"TextCalculatedSize failed", LINE_INFO());
    }

  };
}