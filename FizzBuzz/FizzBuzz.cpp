
#include "FizzBuzz.h"

FB_FLAG FizzBuzz::flagFor(const int index) const
{
	if (index % 15 == 0)
	{
		return FIZZBUZZ;
	}
	else if (index % 5 == 0)
	{
		return BUZZ;
	}
	else if (index % 3 == 0)
	{
		return FIZZ;
	}
	else
	{
		return INDEX;
	}
}

void FizzBuzz::printTo(std::ostream& out, const int index) const
{
	FB_FLAG flag = flagFor(index);
	switch (flag)
	{
	case FIZZBUZZ:
		out << "FizzBuzz" << std::endl;
		break;
	case BUZZ:
		out << "Buzz" << std::endl;
		break;
	case FIZZ:
		out << "Fizz" << std::endl;
		break;

	case INDEX:
	default:
		out << index << std::endl;
		break;
	}
}