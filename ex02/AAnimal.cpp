#include "AAnimal.hpp"

std::string AAnimal::getType() const {
	return (this->type);
}

AAnimal::AAnimal() : type("AAnimal"){
	std::cout << "AAnimal ● Default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &Aanimal) {
	std::cout << "AAnimal ● Copy constructor" << std::endl;
	*this = Aanimal;
}

AAnimal &AAnimal::operator = (const AAnimal &Aanimal) {
	std::cout << "AAnimal ● Copy assignment constructor" << std::endl;
	this->type = Aanimal.getType();
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal ● Destructor" << std::endl;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal has no sound!" << std::endl;
}
