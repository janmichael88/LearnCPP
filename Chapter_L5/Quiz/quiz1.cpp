#include <iostream>

namespace myConstants
{
    const double gravity = 9.8; // in meters/second squared
}

double getInitialHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;
	return initialHeight;
}
 
// Returns height from ground after "secondsPassed" seconds
double calculateHeight(double initialHeight, int secondsPassed)
{
	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
	double distanceFallen = (myConstants::gravity * secondsPassed * secondsPassed) / 2.0;
	double currentHeight = initialHeight - distanceFallen;
 
	return currentHeight;
}
 
// Prints height every second till ball has reached the ground
void printHeight(double height, int secondsPassed)
{
	if (height > 0.0)
	{
		std::cout << "At " << secondsPassed << " seconds, the ball is at height:\t" << height <<
			" meters\n";
	}
	else
		std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.\n";
}
 
void calculateAndPrintHeight(double initialHeight, int secondsPassed)
{
	double height = calculateHeight(initialHeight, secondsPassed);
	printHeight(height, secondsPassed);
}
 
int main()
{
	const double initialHeight =getInitialHeight();
	double time = 0;
	double height;
 
	do
	{
		height = calculateHeight(initialHeight, time);
		printHeight(height, time);
		++time;
	} while (height > 0.0);
 
	return 0;
}