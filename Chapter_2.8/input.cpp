#include <iostream>
using namespace std;

void doSomething(){
	#ifdef PRINT
	cout << "Printing!";
	#endif

	#ifndef PRINT
	cout << "Not Printing!";
	#endif
	

}