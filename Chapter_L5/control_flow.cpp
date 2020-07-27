#include <cstdlib>
#include <iostream>
#include <string>
//note the difference between using if and elif
 /*
int main()
{
    std::cout << "Enter a positive number between 0 and 9999: ";
    int x;
    std::cin >> x;
 
    if (x < 0)
        std::cout << x << " is negative\n";
    if (x < 10)
        std::cout << x << " has 1 digit\n";
    if (x < 100) 
        std::cout << x << " has 2 digits\n";
    if (x < 1000) 
        std::cout << x << " has 3 digits\n";
    if (x < 10000) 
        std::cout << x << " has 4 digits\n";
    else
        std::cout << x << " was larger than 9999\n";
 
    return 0;
}


int main(){
	std::cout << " Enter an integer: ";
	int x;
	std::cin >> x;

	std::cout << " Enter another integer: ";
	int y;
	std::cin >> y;

	if (x > 0 && y > 0)
		std::cout << " both numbers are positive!'\n";
	else if (x > 0 || y > 0)
		std::cout << " One of the numbers is positive  \n";
	else
		std::cout << " Neither number is positive";
}
 

//early returns

enum ErrorCode
{
    SUCCESS = 0,
    NEGATIVE_NUMBER = -1
};

ErrorCode doSomething(int value){
	if (value < 0)
		return ErrorCode(NEGATIVE_NUMBER);

	return ErrorCode(SUCCESS);
}

int main(){
	std::cout << "Enter a positive number: ";
    int x;
    std::cin >> x;
 
    if (doSomething(x) == NEGATIVE_NUMBER)
    {
        std::cout << "You entered a negative number!\n";
    }
    else
    {
        std::cout << "It worked!\n";
    }
 
    return 0;

}


//two ways to write a min function
int min(int x, int y){
	if (x>y)
		return x;
	else
		return y;
}

//usint conditional operators
int min(int x, int y){
	return (x > y) ? y:x;
}

*/
int main (){
	std::string firstname;
	std::string lastname;

	std::cout << " First Name: ";
	std::cin >> firstname;

	std::cout << " Last Name :";
	std::cin >> lastname;

	if (std::string fullname = firstname + " " + lastname; fullname.length() > 20)
	{
        std::cout << '"' << fullName << "\"is too long!\n";
    }
    else
    {
        std::cout << "Your name is " << fullName << '\n';
    }
 
    // code that doesn't need @fullName
 
    return 0;
}