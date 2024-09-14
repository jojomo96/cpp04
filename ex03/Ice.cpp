#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice &src) : AMateria(src) {
}

Ice &Ice::operator=(const Ice &src) {
	if (this != &src) {
		AMateria::operator=(src);
	}
	return *this;
}

Ice::~Ice() {
	// std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
