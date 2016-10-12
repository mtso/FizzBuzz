
#include "FizzBuzz.h"

int FizzBuzz::numberFor(const int index) const
{
	if (index % 15 == 0)
	{
		return -1;
	}
	else if (index % 5 == 0)
	{
		return -2;
	}
	else if (index % 3 == 0)
	{
		return -3;
	}
	else
	{
		return index;
	}
}

void FizzBuzz::printTo(std::ostream& out, const int index) const
{
	int flag = numberFor(index);
	switch (flag)
	{
	case -1:
		out << "FizzBuzz" << std::endl;
		break;
	case -2:
		out << "Buzz" << std::endl;
		break;
	case -3:
		out << "Fizz" << std::endl;
		break;
	default:
		out << index << std::endl;
		break;
	}
}