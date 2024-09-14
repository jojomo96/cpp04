#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") {
}

Dog::Dog(const Dog &src) = default;

Dog::~Dog() = default;

Dog &Dog::operator=(const Dog &src) {
	if (this != &src) {
		Animal::operator=(src);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
