
#pragma once
#include <string>

class WrongAnimal {
public:
	WrongAnimal();

	explicit WrongAnimal(const std::string &type);

	virtual ~WrongAnimal();

	WrongAnimal(const WrongAnimal &src);

	WrongAnimal &operator=(const WrongAnimal &src);

	void makeSound() const;

	[[nodiscard]] std::string getType() const;

protected:
	std::string _type;
};
