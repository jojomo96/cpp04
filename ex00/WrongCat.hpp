
#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat();

	WrongCat(const WrongCat &src);

	~WrongCat() override;

	WrongCat &operator=(const WrongCat &src);

	void makeSound() const;
};
