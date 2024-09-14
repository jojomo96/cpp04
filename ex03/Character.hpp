#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	std::string _name;
	AMateria *_inventory[4];

public:
	Character();

	explicit Character(std::string name);

	Character(const Character &src);

	Character &operator=(const Character &src);

	~Character() override;

	[[nodiscard]] const std::string &getName() const override;

	void equip(AMateria *m) override;

	void unequip(int idx) override;

	void use(int idx, ICharacter &target) override;
};
