#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\2.2oop\2.2oop\complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			complex m(1.0, 1.0), f(1.0, 1.0);
			Assert::AreEqual(1.0, m.getx());
		}
	};
}
