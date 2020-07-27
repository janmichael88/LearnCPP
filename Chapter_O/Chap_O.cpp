#include <bitset>
#include <iostream>
#include <cstdint>

/*
from de morgans low
~(A | B) is the same as ~A & ~B
*/
 
int func1()
{
    const std::uint_fast8_t option_viewed = 0x01;
    const std::uint_fast8_t option_edited = 0x02;
    const std::uint_fast8_t option_favorited = 0x04;
    const std::uint_fast8_t option_shared = 0x08;
    const std::uint_fast8_t option_deleted = 0x80;
 
    std::uint_fast8_t myArticleFlags;

    myArticleFlags |= option_viewed;

    std::cout << myArticleFlags;

    myArticleFlags |= option_edited;

    std::cout << myArticleFlags;
 
    return 0;
}

/*
convert 0100 1101 to deciemal
2^6 + 2^3 + 2^2 +2^1

convert 93 to unsigned
93 / 2 46 r 1
46 / 2 23 r 0
23 / 2 11 r 1
11 / 2 5  r 1
5 / 2 2 r 1
2 /2 1 r0
1 /2 0 r1

0101 1101
1010 0010
1010 0011
*/


/*
end of chapter test
write a function that takes in a number between 0 - 255 and returns thes the unsigned binary form
*/

//function to return the the diff between our number and a power of 2
int printAndDecrementOne(int x, int pow){
	std::cout << "1";
	return (x - pow);
}

int printAndDecrementBit(int x, int pow){
	//test whether is is greater than or equal to pow
	if (x >= pow)
		return printAndDecrementOne(x,pow);

	std::cout << '0';
	return x;
}

int main(){
	std::cout << "Enter and interger between 0 and 255: ";
	int x;
	std::cin >> x;

	 x = printAndDecrementBit(x, 128);
    x = printAndDecrementBit(x, 64);
    x = printAndDecrementBit(x, 32);
    x = printAndDecrementBit(x, 16);
 
    std::cout << ' ';
 
    x = printAndDecrementBit(x, 8);
    x = printAndDecrementBit(x, 4);
    x = printAndDecrementBit(x, 2);
    x = printAndDecrementBit(x, 1);
 
    std::cout << '\n';
 
    return 0;
}

