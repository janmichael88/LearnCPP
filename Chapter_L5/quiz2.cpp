#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time

//define new function  to get guesses

int getGuess(int count)
{
	while (true)
	{
		std::cout << " Guess # " << count << ": ";
		int guess;
		std::cin >> guess;

		if (std::cin.fail())
		{
			//clear it
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return guess;
		}
	}
}

//define a single play
bool playGame(int guesses, int number)
{
	for (int count = 1; count <= guesses; ++count)
	{
		int guess = getGuess(count);
		std::cin >> guess;

		if (guess > number)
		{
			std::cout << "Your guess was hi!" << '\n';
		}
		if (guess < number)
		{
			std::cout << "Your guess was too low!" << '\n';
		}
		else
		{
			return true;
		}
	}
}
//keep asking play again until y
bool playAgain()
{
	char ch;
	do
	{
		std::cout << " Would you like to play again (y/n)? ";
		std::cin >> ch;
	} while (ch != 'y' && ch != 'n');

	return (ch == 'y');
}

//function to create random number

int getRand(const int& A, const int& B) 
{
    static std::random_device randDev;
    static std::mt19937 twister(randDev());
    static std::uniform_int_distribution<int> dist;

    dist.param(std::uniform_int_distribution<int>::param_type(A, B));
    return dist(twister);
}

int main()
{
	const int guesses = 10;
	do
	{
		int number = getRand(1,100);
		std::cout << "Lets play a game. I am thinkng of a number between 1 and 100. You have" << guesses << " tries to guess the right number." << '\n';

		//set boolean win
		bool won = playGame(guesses, number);
		if (won)
		{
			std::cout << "That's correct! You win!" << '\n';
		}
		else
		{
			std::cout << " Sorry  you lose. The correct number is  " << number << '\n';
		}
	} while  (playAgain());

	std::cout << " Thanks for playing!" << "\n";
}