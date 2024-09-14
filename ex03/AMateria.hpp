#pragma once
#include <string>

#include "ICharacter.hpp"

class AMateria {
protected:
	std::string _type;

public:
	AMateria();

	explicit AMateria(const std::string &type);

	virtual ~AMateria();

	AMateria(const AMateria &src);

	AMateria &operator=(const AMateria &src);

	[[nodiscard]] const std::string &getType() const;

	[[nodiscard]] virtual AMateria *clone() const = 0;

	virtual void use(ICharacter &target);
};
