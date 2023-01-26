#include "Dog.hpp"

Brain *Dog::getBrain() const {
	return (this->brain);
}

Dog::Dog() : msg("Dog") {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->message() << "Default constructor" << std::endl;
}

Dog::Dog(const Dog &dog) : AAnimal(dog) {
	std::cout << this->message() << "Copy constructor" << std::endl;
	*this = dog;
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << this->message() << "Copy assignment constructor" << std::endl;
	delete this->brain;
	this->brain = new Brain(*dog.brain);
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

