#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Admin\OneDrive\Рабочий стол\software-laba5\FunctionSolver.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int n = 4;
			int x = 7;
			int expected = 14;

			int actual = calculate(n, x);

			Assert::AreEqual(expected, actual);


		}

	public:
		TEST_METHOD(calculate_get15and6_170returned)
		{
			int n = 15;
			int x = 6;
			int expected = 170;

			int actual = calculate(n, x);

			Assert::AreEqual(expected, actual);

		}


	};

	TEST_CLASS(checkValidParams_Teasts)
	{
	public:
		TEST_METHOD(checkValidParams_get10_exceptionNotThrown)
		{
			int n = 10;

			try
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:
			TEST_METHOD(checkValidParams_get3_exceptionThrown)
		{
			int n = 3;

			try
			{
				checkValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};
}