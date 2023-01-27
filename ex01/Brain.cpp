#include "Brain.hpp"

std::string Brain::getIdea(int i) const {
	return this->ideas[i];
}

void Brain::setIdea(int i, std::string idea) {
	this->ideas[i] = idea;
}

Brain::Brain() {
	std::cout << "Brain ● Default constructor" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->setIdea(i, "empty");
}

Brain::Brain(const Brain &brain) {
	std::cout << "Brain ● Copy constructor" << std::endl;
	*this = brain;
}

Brain &Brain::operator = (const Brain &brain) {
	std::cout << "Brain ● Copy assignment constructor" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->setIdea(i, brain.getIdea(i));
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain ● Destructor" << std::endl;
}
