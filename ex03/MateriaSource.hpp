#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();

	MateriaSource(const MateriaSource &src);

	MateriaSource &operator=(const MateriaSource &src);

	~MateriaSource() override;

	void learnMateria(AMateria *m) override;

	AMateria *createMateria(const std::string &type) override;

private:
	AMateria *_materias[4];
};
