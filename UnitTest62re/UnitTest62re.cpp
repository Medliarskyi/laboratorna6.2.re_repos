#include "pch.h"
#include "CppUnitTest.h"
#include "../lab62re/lab62re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62re
{
	TEST_CLASS(UnitTest62re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int expected[] = { 5, 4, 3, 2, 1 };

			reverseArrayRec(arr, 0, 4);  

			for (int i = 0; i < 5; ++i) {
				Assert::AreEqual(expected[i], arr[i]);
			}
		}
	};
}
