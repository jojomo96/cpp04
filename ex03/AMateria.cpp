#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type("undefined") {
}

AMateria::AMateria(const std::string &type) : _type(type) {
}

AMateria::~AMateria() {
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src) : _type(src._type) {
}

AMateria &AMateria::operator=(const AMateria &src) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

const std::string &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "Using AMateria on " << target.getName() << std::endl;
}
