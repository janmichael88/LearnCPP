#include <iostream>
#include <string>

enum Animal{
	pig, 
	chicken, 
	goat, 
	cat, 
	dog, 
	ostrich
};

std::string getAnimalName(Animal animal){
	switch (animal){
		case Animal(chicken):
            return "chicken";
        case Animal(ostrich):
            return "ostrich";
        case Animal(pig):
            return "pig";
        case Animal(goat):
            return "goat";
        case Animal(cat):
            return "cat";
        case Animal(dog):
            return "dog";
 
        default:
            return "???";
	}
}

void printNumberOfAnimalLegs(Animal animal){
	std::cout << "A " << getAnimalName(animal) << " has ";
	switch (animal){
		case Animal(chicken):
		case Animal(ostrich):
		std::cout << " 2 ";
		break;
		case Animal(pig):
		case Animal(goat):
		case Animal(cat):
		case Animal(dog):
		std::cout << " 4 ";
		break;
	}
	std::cout << "legs\n";
}

int main(){
	printNumberOfAnimalLegs(Animal(cat));
	printNumberOfAnimalLegs(Animal(ostrich));


}