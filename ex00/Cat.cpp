
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
}

Cat::Cat(const Cat &src) = default;

Cat::~Cat() = default;

Cat & Cat::operator=(const Cat &src) {
	if (this != &src) {
		Animal::operator=(src); // Call base class assignment operator
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
