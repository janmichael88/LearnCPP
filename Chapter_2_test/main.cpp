#include <iostream>
#include "functions_h.h"

int main(){
	int x = readNumber();
	int y = readNumber();
	int answer = x + y;
	writeAnswer(answer);
}