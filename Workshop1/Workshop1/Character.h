#pragma once
#include<string>
using std::string;
class Character {

private:
	string name;
	int power;
	int health;
	int mana;

public:
	
	Character() = default;

	Character(string name, int power, int health, int mana);

	Character(const Character& ot);

	string getName() const;
	
	int getPower() const;

	int getHealth() const;

	int getMana() const;

	void setHealth(int newHealth);

	void addHealth(int bonusHealth);

	void addMana(int bonsuMana);

	~Character() = default;
};