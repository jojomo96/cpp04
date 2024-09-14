#include "WrongCat.hpp"

#include <iostream>

#include "WrongAnimal.hpp"

WrongCat::WrongCat() : ::WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
	if (this != &src) {
		WrongAnimal::operator=(src); // Call base class assignment operator
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
