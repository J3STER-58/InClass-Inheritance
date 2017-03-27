#include <iostream>
#include "Warrior.h"
#include "Archer.h"
using namespace std;

void DisplayCharacterInfo(Character theCharater);
void Attack(Character theCharacter);

int main()
{
	auto bob = Character("Bob", 100);
	cout << bob.getName() << " has " << bob.getHealth() << " Life." << endl;
	
	auto mike = Warrior("Mike", 150, "longsword");
	DisplayCharacterInfo(mike);

	system("pause");

	auto legolas = Archer("Legolas", 100, "Cool Elven Bow");
	DisplayCharacterInfo(legolas);

	return 0;
}

void DisplayCharacterInfo(Character theCharater)
{
	cout << theCharater.getName() << " has " << theCharater.getHealth() << " Life." << endl;
}

void Attack(Character theCharacter)
{
	cout << theCharacter.Attack();
}