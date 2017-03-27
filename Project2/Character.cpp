#include "Character.h"



Character::Character(std::string name, int startingHealth) : _name(name), _health(startingHealth)
{
}


Character::~Character()
{
}

std::string Character::Attack()
{
	return std::string();
}
