#include <iostream>

int g_x = 2;

extern const int g_y = 3;
int main(){
	std::cout << g_x << " " << g_y << "\n";
	return 0;
}