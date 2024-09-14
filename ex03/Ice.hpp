#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();

	Ice(const Ice &src);

	Ice &operator=(const Ice &src);

	~Ice() override;

	[[nodiscard]] AMateria *clone() const override;

	void use(ICharacter &target) override;
};
