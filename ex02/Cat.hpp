#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();

	Cat(const Cat &src);

	~Cat() override;

	Cat &operator=(const Cat &src);

	void makeSound() const override;
private:
	Brain *_brain;
};
