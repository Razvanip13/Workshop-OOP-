#include"Character.h"

Character::Character(string name, int power, int health, int mana) 
	: name{ name }, power{ power }, health{ health }, mana{ mana } {	
}

Character::Character(const Character& ot)  {
	this->name = ot.name;
	this->power = ot.power;
	this->health = ot.health;
	this->mana = ot.mana;
}

string Character::getName() const {
	return name;
}

int Character::getPower() const {
	return power;
}

int Character::getHealth() const {
	return health;
}

int Character::getMana() const {
	return mana;
}

void Character::setHealth(int newHealth) {
	this->health = newHealth;
}

void Character::addHealth(int bonusHealth) {
	this->health += bonusHealth;
}

void Character::addMana(int bonusMana) {
	this->mana += bonusMana;
}
