
#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
}

WrongAnimal::WrongAnimal(const std::string &type) {
	_type = type;
}

WrongAnimal::~WrongAnimal() = default;

WrongAnimal::WrongAnimal(const WrongAnimal &src) = default;

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return _type;
}
