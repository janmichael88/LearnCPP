#include <iostream>
#include <ctime>
#include <random>

/*

unsigned int PRNG()
{
    // our initial starting seed is 5323
    static unsigned int seed = 5323;
 
    // Take the current seed and generate a new value from it
    // Due to our use of large constants and overflow, it would be
    // hard for someone to casually predict what the next number is
    // going to be from the previous one.
    seed = 8253729 * seed + 2396403;
 
    // Take the seed and return a value between 0 and 32767
    return seed % 32768;
}
 
int main()
{
    // Print 100 random numbers
    for (int count = 1; count <= 100; ++count)
    {
        std::cout << PRNG() << '\t';
 
        // If we've printed 5 numbers, start a new row
        if (count % 5 == 0)
            std::cout << '\n';
    }
 
    return 0;
}


int main()
{
	std::srand(5325);
	int iterations = 500;

	//print 100 random numbers
	for (int count = 1; count <=iterations; ++ count)
	{
		std::cout << std::rand() << '\t';
		if (count % 5 == 0)
		{
			std::cout << '\n';
		}
	}
}



int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	for (int count = 1; count <= 100; ++count)
	{
		std::cout << std::rand() << '\t';

		if  (count  % 5 == 0)
		{
			std::cout << '\n';
		}
	}
}



int getRandomNumber(int min, int max)
{
    static const double fraction =  1.0 / (RAND_MAX + 1.0) ;  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	for (int i = 1; i <= 100; ++i)
	{
		std::cout << getRandomNumber(1,100) << '\n';

	}
}


int main(){
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	static const double fraction = 1 / (RAND_MAX + 1.0);
	for (int i = 1; i <=50; ++i)
	{
		std::cout << fraction << ' ' << std::rand() << ' ' << fraction*static_cast<int>(std::rand()) <<'\n';
	}

}
*/

int getRand(const int& A, const int& B) {
    std::random_device randDev;
    std::mt19937 twister(randDev());
    std::uniform_int_distribution<int> dist(A,B);

    return dist(twister);
}

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << getRand(0,99) << std::endl;
    }

    return 0;
}


