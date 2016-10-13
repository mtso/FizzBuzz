
#include <iostream>
#include "FizzBuzz.h"

int main(int argc, char* const argv[])
{
	FizzBuzz fizzer = FizzBuzz();

	for (int i = 1; i <= 100; i++)
	{
		fizzer.printTo(std::cout, i);
	}

	system("pause");
	return 0;
}