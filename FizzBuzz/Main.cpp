
#include <iostream>
#include "FizzBuzz.h"

int main(int argc, char* const argv[])
{
	FizzBuzz buzzer = FizzBuzz();

	for (int i = 1; i <= 100; i++)
	{
		buzzer.printTo(std::cout, i);
	}

	system("pause");
	return 0;
}