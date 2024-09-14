#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("default"), _inventory() {
	for (auto &i: _inventory) {
		i = nullptr;
	}
}

Character::Character(std::string name) : _name(std::move(name)), _inventory() {
	for (auto &i: _inventory) {
		i = nullptr;
	}
}

Character::Character(const Character &src) : _name(src._name), _inventory() {
	for (int i = 0; i < 4; ++i) {
		if (src._inventory[i]) {
			_inventory[i] = src._inventory[i]->clone();
		} else {
			_inventory[i] = nullptr;
		}
	}
}

Character &Character::operator=(const Character &src) {
	if (this != &src) {
		_name = src._name;
		for (int i = 0; i < 4; ++i) {
			if (_inventory[i]) {
				delete _inventory[i];
			}
			if (src._inventory[i]) {
				_inventory[i] = src._inventory[i]->clone();
			} else {
				_inventory[i] = nullptr;
			}
		}
	}
	return *this;
}

Character::~Character() {
	for (const auto &i: _inventory) {
		delete i;
	}
}

const std::string &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	if (!m) return;
	for (auto &i: _inventory) {
		if (!i) {
			i = m;
			break;
		}
	}
}

void Character::unequip(const int idx) {
	if (idx >= 0 && idx < 4) {
		_inventory[idx] = nullptr;
	}
}

void Character::use(const int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
}
