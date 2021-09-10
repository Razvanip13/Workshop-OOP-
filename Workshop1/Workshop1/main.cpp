#include<iostream>
#include"Character.h"
using std::cout;
using std::endl;
int main() {

	//{
	//	Character character = Character("Marius", 2000, 4000, 500);
	//}

	/*cout << "Salut, ma cheama " << character.getName() << endl;

	cout << "Hp-ul meu e " << character.getHealth() << endl;

	character.addHealth(300);

	cout << "Acum am " << character.getHealth() << endl;*/
	
	//int a{ 3 };

	//int  a[] = { 0, 1 , 2, 3, 4, 5 };

	//for (int i = 0; i < 6; i++) {
	//	cout << a[i] << " ";
	//}

	//cout << endl;

	//for (auto valoare : a) {
	//	cout << valoare << " ";
	//}

	//float  b = 4.5f;
	//int a = static_cast<int>(b);
	//string b = "45";
	//int c = static_cast<int>(b);

	Character character = Character("Marius", 2000, 4000, 500);
	Character character2 = Character(character2);

	cout << character.getName() << " " << character.getPower()
		<< " " << character.getHealth() << " " << character.getMana() << endl;

	cout << character2.getName() << " " << character2.getPower()
		<< " " << character2.getHealth() << " " << character2.getMana() << endl;

	return 0;
}