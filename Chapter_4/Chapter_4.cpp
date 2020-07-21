#include <iostream>
#include <iomanip>
/*
for 2^8, 256, signed can hold -128 to 127 inclusive ints
for a n bit signed has range -2^(n-1) to 2^(n-1) - 1
The number 280 is too big to fit in our 1-byte range of 0 to 255. 1 greater than the largest number of the type is 256. Therefore, we divide 280 by 256, getting 1 remainder 24. The remainder of 24 is what is stored.

Here’s another way to think about the same thing. Any number bigger than the largest number representable by the type simply “wraps around” (sometimes called “modulo wrapping”). 255 is in range of a 1-byte integer, so 255 is fine. 256, however, is outside the range, so it wraps around to the value 0. 257 wraps around to the value 1. 280 wraps around to the value 24.
*/

int main(){
	const double gravity = 9.8;
	std::cout << gravity;
	return 0;
}