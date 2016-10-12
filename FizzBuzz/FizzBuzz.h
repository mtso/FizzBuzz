
#ifndef FIZZBUZZ_H
#define FIZZBIZZ_H

class FizzBuzz
{
private:
public:
	/**
	 * Returns a flag of -1 if the answer should be FizzBuzz
	 *   a flag of -2 if the answer should be Fizz
	 *   a flag of -3 if the answer should be Buzz
	 *   the integer if none of the above
	 */
	int numberFor(const int index) const;
};

#endif