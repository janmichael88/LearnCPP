#include <iostream>

/*

int pow(int base, int exp)
{
	int total = 1;
	for (int count = 0; count < exp; ++count)
		total *=base;
	return total;
}

int main(){
	int base = 2;
	int power = 5;
	std::cout << pow(base, power);
}


int main()
{
	for (char c = 'a'; c <= 'e'; ++c)
	{
		std::cout << c << ' ';
		for (int i = 0; i < 3; ++i)
		{
			std::cout << i << ' ';
		}
		 std::cout << '\n';
	}

}

int sumTo(int value)
{
	int sum = 0;
	for(int i = 1; i <= value; ++i)
	{
		sum = sum + i;
	}
	return sum;
}

int main()
{
	std::cout << sumTo(5);

}


int main()
{
	unsigned int i = 1;
	std::cout << i << '\n';
	std::cout << --i << '\n';
	std::cout << --i << '\n';

}


int main()
{
	int sum = 0;
	//allow user to enter numbers until counter runs out
	for (int count = 0; count  <= 10; ++count)
	{
		std::cout << " Enter a number to add or 0 to exit: ";
		int num;
		std::cin >> num;

		if (num == 0)
		{
			break;
		}
		sum += num;
	}

	std::cout << " The sum of all the numbers you entered is: " << sum;
}



int main()
{
	while (true)
	{
		std::cout << " Enter a 0 to exit or anything else";
		int num;
		std::cin >> num;

		if (num == 0)
		{
			break;
		}
	}
	std::cout << " WE ARE OUT OF THE LOOP!";
	return 0;
}



int breakOrReturn()
{
	while (true)
	{
		std::cout << " Enter a b or r to return: ";
		char ch;
		std::cin >> ch;

		if (ch == 'b')
		{
			break;
		}
		if (ch == 'r')
		{
			return 1;
		}
	}
	std::cout << " We broke out of the loop!!!\n";
	return 0;
}

int main()
{
	int value = breakOrReturn();
	std::cout << " Function breakOrReturn " << value << '\n';

}



//print numbers 1 to not divisible by 4

int main()
{
	for (int count = 0; count <=20; ++count)
	{
		if ((count % 4) == 0)
		{
			continue;
		}
			std::cout << count << '\n';
		
	}
}

*/

// an infinite do while loop

int main()
{
	int count = 0;
	while (count < 10)
	{
		if (count == 6)
		{
			continue;
		}
		std::cout << count << ' ';

		++count;
	}
}
























