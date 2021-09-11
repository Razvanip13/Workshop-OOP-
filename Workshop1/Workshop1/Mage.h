#pragma once
#include"Character.h";

class Mage : public Character {
private:
	
	int potions;

public:
	Mage(string name, int power, int health, int mana, int potions);

	int getPotions() const; 

	void makeASpell();
};