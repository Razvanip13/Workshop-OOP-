#pragma once
#include<vector>
using std::vector;
template <typename T>
class RandomBag {
private: 
	vector<T> elems;

public:

	RandomBag() = default;

	void add(T value);

	T middleValue();
};

template <typename T>
void RandomBag<T>::add(T value) {
	elems.push_back(value);
}

template <typename T>
T RandomBag<T>::middleValue() {
	if (elems.size() == 0) {
		throw "No more elements";
	}

	int index = elems.size() / 2;
	T result = elems[index];
	elems.erase(elems.begin() + index);
	return result;
}