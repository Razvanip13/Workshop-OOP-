#include<iostream>
#include"Character.h"
#include"RandomBag.h"
#include"Mage.h"
#include<algorithm>
#include<map>
using std::cout;
using std::endl;
using std::vector;
using std::transform;
using std::sort;
using std::map;
using std::pair;

int suma(int a, int b) {
	return a + b;
}
float suma(float a, float b) {
	return a + b;
}
string suma(string a, string b) {
	return a + b;
}
template<typename T> 
T suma(T a, T b) {
	return a + b;
}
template<typename T>
T multiplyByTwo(T a) {
	return a * 2;
}
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

	//Character character = Character("Marius", 2000, 4000, 500);
	//Character character2 = Character(character2);

	//cout << character.getName() << " " << character.getPower()
	//	<< " " << character.getHealth() << " " << character.getMana() << endl;

	//cout << character2.getName() << " " << character2.getPower()
	//	<< " " << character2.getHealth() << " " << character2.getMana() << endl;

	//cout << suma(4, 5) << endl;
	//cout << suma(4.5, 7) << endl;
	//cout << suma("ala", "bala") << endl;
	//cout << suma<int>(4, 5) << endl;
	//cout << suma<string>("ala", "bala") << endl;

	//auto a = suma<string>("aaa", "b bb");
	//cout << a << endl;

	//RandomBag<int> randomBag;
	//randomBag.add(1);
	//randomBag.add(2);
	//randomBag.add(3);
	//randomBag.add(4);
	//randomBag.add(5);


	//try {

	//	int value = randomBag.middleValue();
	//	cout << value << endl;

	//	value = randomBag.middleValue();
	//	cout << value << endl;

	//	value = randomBag.middleValue();
	//	cout << value << endl;

	//	value = randomBag.middleValue();
	//	cout << value << endl;

	//	value = randomBag.middleValue();
	//	cout << value << endl;

	//	value = randomBag.middleValue();
	//	cout << value << endl;

	//}
	//catch (...) {
	//	cout << "S-a terminat";
	//}


	//for (vector<int>::iterator it = first_vector.begin(); it != first_vector.end(); it++) {
	//	cout << *it << endl;
	//}

	//vector<Character> second_vector;
	//second_vector.push_back(Character("Marius", 2000, 4000, 500));
	//second_vector.push_back(Character("Marius", 2000, 4000, 500));
	//second_vector.push_back(Character("Marius", 2000, 4000, 500));
	//second_vector.push_back(Character("Marius", 2000, 4000, 500));
	//
	//for (vector<Character>::iterator it = second_vector.begin(); it != second_vector.end(); it++) {
	//	cout << it->getName() << endl;
	//}



	/*for (auto& element : first_vector) {
		element = element * 2;
	}

	for (vector<int>::iterator it = first_vector.begin(); it != first_vector.end(); it++) {
		cout << *it << endl;
	}*/

	//vector<int> first_vector;
	//vector<int> multiplied_vector;

	//first_vector.push_back(1);
	//first_vector.push_back(2);
	//first_vector.push_back(3);
	//first_vector.push_back(4);
	//first_vector.push_back(5);
	//first_vector.push_back(6);

	//transform(first_vector.begin(), first_vector.end(), std::back_inserter(multiplied_vector), [](const auto& element) {

	//	return element * 2;
	//});

	//for (const auto& valoare : multiplied_vector) { 
	//	cout << valoare << endl;
	//}

	vector<Character> second_vector;
	second_vector.push_back(Character("marius", 2000, 4000, 500));
	second_vector.push_back(Character("marius1", 4000, 4000, 500));
	second_vector.push_back(Character("marius2", 3000, 4000, 500));
	second_vector.push_back(Character("marius3", 7000, 4000, 500));

	for (const auto& character : second_vector) {
		cout << character.getName() << " " << character.getPower() << endl;
	}

	//sort(second_vector.begin(), second_vector.end(), [](const auto& a, const auto& b) {

	//	auto val1 = (a.getPower() + a.getMana() + a.getHealth()) / 3;
	//	auto val2 = (b.getPower() + b.getMana() + b.getHealth()) / 3;
	//	return  val1 < val2;
	//});

	//cout << endl;

	//for (const auto& character : second_vector) {
	//	cout << character.getName() << " " << character.getPower()
	//		<< " " << character.getHealth() << " " << character.getMana() << endl;
	//}

	/*Character standard_character = Character("Dummy", 5000, 3000, 1000);

	std::replace_if(second_vector.begin(), second_vector.end(), [](const auto& character) {
		return character.getPower() <= 3000;
	}, standard_character);

	cout << endl;

	for (const auto& character : second_vector) {
		cout << character.getName() << " " << character.getPower()
			<< " " << character.getHealth() << " " << character.getMana() << endl;
	}

	vector<Character>::iterator it;

	it = std::find_if(second_vector.begin(), second_vector.end(), [](const auto& character) {
		return character.getPower() - character.getMana() > 0;
	});

	cout << endl;

	if (it != second_vector.end() ) {
		cout << it->getName() << " " << it->getPower()
			<< " " << it->getHealth() << " " << it->getMana() << endl;
	}*/

	//RandomBag<int> randomBag;

	//randomBag.add(1);
	//randomBag.add(2);
	//randomBag.add(3); 

	//cout << randomBag.middleValue() << endl;


	//vector<int> first_vector;

	//first_vector.push_back(1);
	//first_vector.push_back(2);
	//first_vector.push_back(3);
	//first_vector.push_back(4);
	//first_vector.push_back(5);
	//first_vector.push_back(6);

	//first_vector.erase(first_vector.begin() + 2, first_vector.end() - 1);

	//for (const auto& value : first_vector) {
	//	cout << value << endl;
	//}

	//first_vector.pop_back();

	//cout << endl;

	//for (const auto& value : first_vector) {
	//	cout << value << endl;
	//}

	//map<int, Character> myMap;
	//Character standard_character = Character("Dummy", 5000, 3000, 1000);
	//Character standard_character2 = Character("Bernard", 2000, 1000, 500);

	//myMap.insert(pair<int,Character>(1,standard_character));
	//myMap.insert(pair<int, Character>(3, standard_character2));

	//cout << myMap[3].getName() << endl;

	//auto just_a_pair = pair<int, Character>(5, standard_character);
	//auto just_a_pair2 = pair<int, Character>(3, standard_character);

	//if (myMap.find(just_a_pair.first) != myMap.end()) {
	//	myMap[just_a_pair.first] = just_a_pair.second;
	//}

	//if (myMap.find(just_a_pair2.first) != myMap.end()) {
	//	myMap[just_a_pair2.first] = just_a_pair2.second;
	//}

	//for (const auto& pair : myMap) {
	//	cout << pair.first << " " << pair.second.getName() << endl;
	//}

	/*int power = 2000;

	auto it = std::find_if(myMap.begin(), myMap.end(), [power](const auto& myPair) {

		return myPair.second.getPower() == 2000;

	});

	if (it != myMap.end()) {
		cout << it->second.getName() << it->second.getPower() << endl;
	}*/

	auto mage = Mage("Merlin", 4000, 2000, 5000, 100);

	cout << mage.getPotions();

	return 0;
}