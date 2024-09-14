
#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main() {
	constexpr int numAnimals = 10;
	Animal* animals[numAnimals];

	// Fill half with Dog objects and half with Cat objects
	for (int i = 0; i < numAnimals / 2; ++i) {
		animals[i] = new Dog();
	}
	for (int i = numAnimals / 2; i < numAnimals; ++i) {
		animals[i] = new Cat();
	}

	// Delete each Animal pointer
	for (auto & animal : animals) {
		delete animal;
	}

	return 0;
}
