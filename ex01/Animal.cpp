#include "Animal.hpp"

#include <iostream>

Animal::Animal() : _type("Animal") {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
	std::cout << "Animal type constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &src) = default;

Animal &Animal::operator=(const Animal &src) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
	return _type;
}
