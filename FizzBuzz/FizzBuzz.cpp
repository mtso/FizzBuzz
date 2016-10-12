
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