#include"Mage.h"

Mage::Mage(string name, int power, int health, int mana, int potions) 
	: Character{ name, power, health, mana }, potions{ potions }  {

}

int Mage::getPotions() const {
	return potions;
}

void Mage::makeASpell() {
  
	potions = potions / 2;
}