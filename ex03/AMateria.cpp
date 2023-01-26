#include "AMateria.hpp"

const std::string &AMateria::getType() const {
	return (_type);
}

unsigned int AMateria::getXP() const {
	return (_xp);
}

AMateria::AMateria() : _type("default"), _xp(0) {
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(const std::string & type) : _type(type), _xp(0) {
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(const AMateria & Amateria) {
	std::cout << "AMateria copy constructor" << std::endl;
	*this = Amateria;
}

AMateria & AMateria::operator = (const AMateria & Amateria) {
	std::cout << "AMateria copy assignment operator" << std::endl;
	_type = Amateria._type;
	_xp = Amateria._xp;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor" << std::endl;
}

void AMateria::use(ICharacter& target) {
	_xp += 10;
}
