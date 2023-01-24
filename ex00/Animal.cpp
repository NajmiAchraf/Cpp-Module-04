#include "Animal.hpp"

std::string Animal::getType() const {
	return (this->type);
}

Animal::Animal() : msg("Animal"), type("Animal"){
	std::cout << this->message() << "Default constructor" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << this->message() << "Copy constructor" << std::endl;
	*this = animal;
}

Animal &Animal::operator = (const Animal &animal) {
	std::cout << this->message() << "Copy assignment constructor" << std::endl;
	this->type = animal.getType();
	return (*this);
}

Animal::~Animal() {
	std::cout << this->message() << "Destructor" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal has no sound!" << std::endl;
}

std::string Animal::message() {
	return (this->msg + " ● ");
}
