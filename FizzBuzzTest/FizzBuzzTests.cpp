#include "stdafx.h"
#include "CppUnitTest.h"
#include "FizzBuzz.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

template<> static std::wstring Microsoft::VisualStudio::CppUnitTestFramework::ToString<FB_FLAG>(const FB_FLAG& flag)
{
	RETURN_WIDE_STRING(flag);
}

namespace FizzBuzzTest
{		
	TEST_CLASS(FizzBuzzTests)
	{
	public:
		
		TEST_METHOD(flagForIndex)
		{
			FizzBuzz fb = FizzBuzz();
			FB_FLAG flag15 = fb.flagFor(15);
			FB_FLAG flag5 = fb.flagFor(5);
			FB_FLAG flag3 = fb.flagFor(3);
			FB_FLAG flag1 = fb.flagFor(1);
			FB_FLAG flag_1 = fb.flagFor(-1);
			FB_FLAG flag_3 = fb.flagFor(-3);
			FB_FLAG flag_5 = fb.flagFor(-5);
			FB_FLAG flag_15 = fb.flagFor(-15);

			Assert::AreEqual(FIZZBUZZ, flag15);
			Assert::AreEqual(BUZZ, flag5);
			Assert::AreEqual(FIZZ, flag3);
			Assert::AreEqual(INDEX, flag1);
			Assert::AreEqual(INDEX, flag_1);
			Assert::AreEqual(FIZZ, flag_3);
			Assert::AreEqual(BUZZ, flag_5);
			Assert::AreEqual(FIZZBUZZ, flag_15);
		}

		TEST_METHOD(printFizzBuzzToStream)
		{
			std::stringstream ostreamCapture;

			FizzBuzz fb = FizzBuzz();
			fb.printTo(ostreamCapture, 15);

			std::string actual = ostreamCapture.str();
			std::string expected = "FizzBuzz\n";

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(printBuzzToStream)
		{
			std::stringstream ostreamCapture;

			FizzBuzz fb = FizzBuzz();
			fb.printTo(ostreamCapture, 5);

			std::string actual = ostreamCapture.str();
			std::string expected = "Buzz\n";

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(printFizzToStream)
		{
			std::stringstream ostreamCapture;

			FizzBuzz fb = FizzBuzz();
			fb.printTo(ostreamCapture, 3);

			std::string actual = ostreamCapture.str();
			std::string expected = "Fizz\n";

			Assert::AreEqual(expected, actual);
		}
	};
}