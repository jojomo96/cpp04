#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") {
	_brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src) {
	_brain = new Brain(*src._brain);
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &src) {
	if (this != &src) {
		Animal::operator=(src); // Call base class assignment operator
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
