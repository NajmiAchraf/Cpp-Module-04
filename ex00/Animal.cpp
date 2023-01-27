#include "Animal.hpp"

std::string Animal::getType() const {
	return (this->type);
}

Animal::Animal() : type("Animal"){
	std::cout << "Animal ● Default constructor" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal ● Copy constructor" << std::endl;
	*this = animal;
}

Animal &Animal::operator = (const Animal &animal) {
	std::cout << "Animal ● Copy assignment constructor" << std::endl;
	this->type = animal.getType();
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal ● Destructor" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal has no sound!" << std::endl;
}
