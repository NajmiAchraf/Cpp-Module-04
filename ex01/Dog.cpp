#include "Dog.hpp"

Dog::Dog() : msg("Dog") {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->message() << "Default constructor" << std::endl;
}

Dog::Dog(const Dog &dog) {
	std::cout << this->message() << "Copy constructor" << std::endl;
	*this = dog;
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << this->message() << "Copy assignment constructor" << std::endl;
	this->type = dog.getType();
	return (*this);
}

Dog::~Dog() {
	delete this->brain;
	std::cout << this->message() << "Destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "bark ∪( ●ᴥ ●)∪" << std::endl;
}

std::string Dog::message() {
	return (this->msg + " ● ");
}

