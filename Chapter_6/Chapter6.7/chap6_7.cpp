#include <iostream>


//forward declarations
int initx();
int inity();

//assign
int g_x = initx();
int g_y = inity();

//define??
int initx(){
	return g_y;
}

int inity(){
	return 5;
}

int main(){
	std::cout << g_x << " " << g_y << "\n";
}

