#include <iostream>

//define function to take in number and store it

int getUseValue(){
	std::cout << " Enter a double value: ";
	double x;
	std::cin >> x;
	return x;
}

//funciton to get operation

int getOperation(){
	std::cout << " Enter an operation from the list (+, -, *, or /)";
	char x;
	std::cin >> x;
	return x;
}

//function to print

void printResults(char op, double x, double y){
	if (op == '+')
		std::cout << x << " + " << y << " is " << x+y;
	else if (op == '-')
		std::cout << x << " - " << y << " is " << x-y;
	else if (op == '*')
		std::cout << x << " * " << y << " is " << x*y;
	else if (op == '/')
		std::cout << x << " / " << y << " is " << x/y;

}

int main(){
	double x = getUseValue();
	double y = getUseValue();
	char op = getOperation();

	printResults(op,x,y);
	return 0; 
}