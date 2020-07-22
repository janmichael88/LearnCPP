#include <iostream>
#include "a.cpp"

extern int g_x;
extern const int g_y;

int main(){
	std::cout << g_x;
	return 0;
}