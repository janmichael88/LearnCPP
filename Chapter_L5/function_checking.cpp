#include <iostream>

double getDouble()
{
	while (true)
	{
		std::cout << "Enter a doble value: ";
		double x;
		std::cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << " WRONG NUMBER CHOSE ANOTHER ONE!";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperator()
{
	while (true)
	{
		std::cout << " Enter an operation";
		char op;
		std:: cin >> op;

		//switch
		switch (op)
		{
			case '+':
			case '-':
			case '*':
			case '/':
			return op;
			default:
			std::cout << " WRONG OP!";
		}
	}
}

void printResult(double x, char op, double y)
{
	switch (op)
    {
    case '+':
        std::cout << x << " + " << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " is " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " is " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " is " << x / y << '\n';
        break;
    default: // Being robust means handling unexpected parameters as well, even though getOperator() guarantees op is valid in this particular program
        std::cerr << "Something went wrong: printResult() got an invalid operator.\n";
    }
}

int main()
{
	double x = getDouble();
	char op = getOperator();
	double y = getDouble();

	printResult(x,op,y);
	

}