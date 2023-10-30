#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6.2IT/LAB6.2IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62Itt
{
	TEST_CLASS(UnitTest62Itt)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4, 5, 6 };
			int n = 6;

			double z = calculateAverage(a, n);
			Assert::AreEqual(z, 3.0);
		}
	};
}
