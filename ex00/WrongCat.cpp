
#include "WrongCat.hpp"

#include <iostream>

#include "WrongAnimal.hpp"

WrongCat::WrongCat() : ::WrongAnimal("WrongCat") {
}

WrongCat::WrongCat(const WrongCat &src) = default;

WrongCat::~WrongCat() = default;

WrongCat & WrongCat::operator=(const WrongCat &src) {
	if (this != &src) {
		WrongAnimal::operator=(src); // Call base class assignment operator
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
