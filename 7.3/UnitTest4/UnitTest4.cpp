#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Dell\source\repos\7.3\Source.cpp "
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int mass[9] = { 6,  12,   2,  13, - 2,   3,  - 1, - 1,   7, },
				min = 0,
				sum = 0;
			(mass, 9, min, sum);
			Assert::AreEqual(min, 0);
			Assert::AreEqual(sum, 0);
			Assert::AreEqual(mass[0], 6);
			Assert::AreEqual(mass[8], 7);
		}
	};
}
