#include <iostream>
#include <string>

// types in enum
enum MonsterType{
	ogre,
	dragon,
	orc,
	giant_spider,
	slime
};

//creating the actual monster
struct Monster{
	MonsterType type;
	std::string name;
	int health;
};

//converting the monster type name as a string

std::string getMonsterTypeString(MonsterType type){
	if (type == ogre)
		return "Ogre";
	if (type == dragon)
		return "Dragon";
	if (type == orc)
		return "Orc";
	if (type == giant_spider)
		return "Giant Spider";
	if (type == slime)
		return "Slime";
	return "Unknown";
}

//print monster stats

void printMonster(Monster monster1){
	std::cout << " This " << getMonsterTypeString(monster1.type) <<
	" is named " << monster1.name << " and has " << monster1.health << " health.";
}

int main(){
	Monster slime;
	//ogre.type = ogre;
	slime.name = "Goop";
	slime.health = 145;

	printMonster(slime);
}