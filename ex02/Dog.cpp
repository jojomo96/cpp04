#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain(*src._brain)) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	if (this != &src) {
		Animal::operator=(src); // Call base class assignment operator
		*_brain = *src._brain; // Use Brain's assignment operator
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
