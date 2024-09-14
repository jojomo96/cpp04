#pragma once
#include <string>

class Animal {
public:
	Animal();

	explicit Animal(const std::string &type);

	virtual ~Animal();

	Animal(const Animal &src);

	Animal &operator=(const Animal &src);

	virtual void makeSound() const;

	[[nodiscard]] std::string getType() const;

protected:
	std::string _type;
};
