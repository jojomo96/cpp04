#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	if (this != &src) {
		Animal::operator=(src);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
