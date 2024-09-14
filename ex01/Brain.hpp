#pragma once
#include <string>

class Brain {
public:
	Brain();

	Brain(const Brain &src);

	~Brain();

	Brain &operator=(const Brain &src);

private:
	std::string ideas[100];
};
