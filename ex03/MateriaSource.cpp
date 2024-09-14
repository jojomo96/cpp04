#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : IMateriaSource(), _materias() {
	for (auto & _materia : _materias) {
		_materia = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src) : IMateriaSource(), _materias() {
	for (int i = 0; i < 4; ++i) {
		if (src._materias[i]) {
			_materias[i] = src._materias[i]->clone();
		} else {
			_materias[i] = nullptr;
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < 4; ++i) {
			if (_materias[i]) {
				delete _materias[i];
			}
			if (src._materias[i]) {
				_materias[i] = src._materias[i]->clone();
			} else {
				_materias[i] = nullptr;
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (const auto &_materia: _materias) {
		delete _materia;
	}
}

void MateriaSource::learnMateria(AMateria *m) {
	if (!m) return;
	for (auto & _materia : _materias) {
		if (!_materia) {
			_materia = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (const auto & _materia : _materias) {
		if (_materia && _materia->getType() == type) {
			return _materia->clone();
		}
	}
	return nullptr;
}
