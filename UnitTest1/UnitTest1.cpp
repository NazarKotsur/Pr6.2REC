#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr6.2REC/Pr6.2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestSumOddIndexedElements)
		{
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };

			int result = sumOddIndexedElements(arr, size);

			Assert::AreEqual(6, result);
		}

		TEST_METHOD(TestSwapMinMax)
		{
			const int size = 5;
			int arr[size] = { 3, 1, 2, 4, 5 };

			swapMinMax(arr, size);

			Assert::AreEqual(3, arr[0]);
			Assert::AreEqual(4, arr[3]);
		}
	};
}
