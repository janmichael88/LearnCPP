#include "constants.h"
#include <iostream>
#include <cmath>

double getHeight(){
	std::cout << " What is the heigh of your ball?";
	double height;
	std::cin >> height;
	return height;
}

//function go get height after n seconds

double calculateHeight(double height, int seconds){
	double currentheight = height - (constants::gravity*(seconds*seconds)) / 2.0;
	return currentheight;
}

void printHeight(double height, int seconds){
	if (height > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrint(double height, int seconds){
	double currentheight = calculateHeight(height,seconds);
	printHeight(currentheight,seconds);
}

int main()
{
	const double towerHeight = getHeight();
 
	calculateAndPrint(towerHeight, 0);
	calculateAndPrint(towerHeight, 1);
	calculateAndPrint(towerHeight, 2);
	calculateAndPrint(towerHeight, 3);
	calculateAndPrint(towerHeight, 4);
	calculateAndPrint(towerHeight, 5);
 
	return 0;
}