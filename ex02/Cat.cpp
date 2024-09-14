
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
	_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src) {
	_brain = new Brain(*src._brain);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &src) {
	if (this != &src) {
		Animal::operator=(src); // Call base class assignment operator
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
