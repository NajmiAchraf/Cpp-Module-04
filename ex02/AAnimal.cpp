#include "AAnimal.hpp"

std::string AAnimal::getType() const {
	return (this->type);
}

AAnimal::AAnimal() : msg("AAnimal"), type("AAnimal"){
	std::cout << this->message() << "Default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) {
	std::cout << this->message() << "Copy constructor" << std::endl;
	*this = animal;
}

AAnimal &AAnimal::operator = (const AAnimal &Aanimal) {
	std::cout << this->message() << "Copy assignment constructor" << std::endl;
	this->type = Aanimal.getType();
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << this->message() << "Destructor" << std::endl;
}

std::string AAnimal::message() {
	return (this->msg + " ● ");
}
