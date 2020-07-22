#include <iostream>

int main(){
	std::cout << "Enter an integer: ";
	int smaller;
	std::cin >> smaller;

	std::cout << "Enter a larger integer: ";
	int larger;
	std::cin >> larger;

	// in the case that smaller is larger
	if (smaller > larger){
		std::cout << "Swapping values!!!";
		int temp = larger;
		larger = smaller;
		smaller = temp;
		//temp dies here

	}

	std::cout << " The smaller value is..." << smaller << "\n";
	std::cout << " The larger values is ..." << larger << "\n";
	return 0;


}