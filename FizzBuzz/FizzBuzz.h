
#ifndef FIZZBUZZ_H
#define FIZZBIZZ_H

#include <iostream>

class FizzBuzz
{
private:
public:
	/**
	 * @returns a flag of -1 if the answer should be FizzBuzz
	 *   a flag of -2 if the answer should be Buzz
	 *   a flag of -3 if the answer should be Fizz
	 *   the integer if none of the above
	 */
	int numberFor(const int index) const;

	/**
	 * Print the correct answer to the stream.
	 * @param ostream to print to
	 * @param index to print for
	 */
	void printTo(std::ostream& out, const int index) const;
};

#endif