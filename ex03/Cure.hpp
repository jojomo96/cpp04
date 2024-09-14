#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();

	Cure(const Cure &src);

	Cure &operator=(const Cure &src);

	~Cure() override;

	[[nodiscard]] AMateria *clone() const override;

	void use(ICharacter &target) override;
};
