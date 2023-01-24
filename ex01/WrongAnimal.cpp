#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const {
	return (this->type);
}

WrongAnimal::WrongAnimal() : msg("WrongAnimal"), type("WrongAnimal"){
	std::cout << this->message() << "Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	std::cout << this->message() << "Copy constructor" << std::endl;
	*this = animal;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &animal) {
	std::cout << this->message() << "Copy assignment constructor" << std::endl;
	this->type = animal.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << this->message() << "Destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal has no sound!" << std::endl;
}

std::string WrongAnimal::message() {
	return (this->msg + " ● ");
}
