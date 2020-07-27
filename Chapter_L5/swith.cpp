#include <iostream>
#include <string>

//Qui1

int calculate(int x, int y, char operation){
	switch (operation){
		case '+':
		return x + y;

		case '-':
		return x - y;

		case '*':
		return x*y;

		case '/':
		return x/y;

		case '%':
		return x%y;
	}
}

int getInteger(){
	std::cout << " Enter an integer : ";
	int x;
	std::cin >> x;
	return x;
}

char getOperation(){
	std::cout << " Enter an operation :";
	char x;
	std::cin >> x;
	return x;
}

int main(){
	int x = getInteger();
	int y = getInteger();
	char op = getOperation();

	std::cout << x << ' ' << op << ' ' << y  << " is " << '\n'  << calculate(x,y,op) << '\n';

}

