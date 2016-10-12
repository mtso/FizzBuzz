#include "stdafx.h"
#include "CppUnitTest.h"
#include "FizzBuzz.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FizzBuzzTest
{		
	TEST_CLASS(FizzBuzzTests)
	{
	public:
		
		TEST_METHOD(flagForIndex)
		{
			FizzBuzz fb = FizzBuzz();
			int flag15 = fb.flagFor(15);
			int flag5 = fb.flagFor(5);
			int flag3 = fb.flagFor(3);
			int flag1 = fb.flagFor(1);

			Assert::AreEqual(flag15, -1);
			Assert::AreEqual(flag5, -2);
			Assert::AreEqual(flag3, -3);
			Assert::AreEqual(flag1, 1);
		}

	};
}