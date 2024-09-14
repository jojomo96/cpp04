#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &src) {
	for (int i = 0; i < 100; ++i) {
		ideas[i] = src.ideas[i];
	}
	std::cout << "Brain copy constructor" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
	if (this != &src) {
		for (int i = 0; i < 100; ++i) {
			ideas[i] = src.ideas[i];
		}
	}
	return *this;
}
