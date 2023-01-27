#include "Dog.hpp"

Brain *Dog::getBrain() const {
	return (this->brain);
}

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog ● Default constructor" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	std::cout << "Dog ● Copy constructor" << std::endl;
	*this = dog;
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << "Dog ● Copy assignment constructor" << std::endl;
	this->brain = new Brain(*dog.brain);
	this->type = dog.getType();
	return (*this);
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog ● Destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "bark ∪( ●ᴥ ●)∪" << std::endl;
}
