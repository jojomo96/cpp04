
#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main() {
	const Animal* meta = new Animal();
	const Cat* cat = new Cat();
	const Dog* dog = new Dog();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	meta->makeSound();
	cat->makeSound(); // Should print "Meow" if implemented
	dog->makeSound(); // Should print "Woof"

	return 0;
}
