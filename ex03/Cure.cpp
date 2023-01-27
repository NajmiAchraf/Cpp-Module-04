#include "Cure.hpp"

Cure::Cure() {
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &Cure) {
	std::cout << "Cure copy constructor" << std::endl;
	*this = Cure;
}

Cure &Cure::operator = (const Cure &Cure) {
	std::cout << "Cure copy assignment operator" << std::endl;
	this->_type = Cure._type;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
}

AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
