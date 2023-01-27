#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog ● Default constructor" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	std::cout << "Dog ● Copy constructor" << std::endl;
	*this = dog;
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << "Dog ● Copy assignment constructor" << std::endl;
	this->type = dog.getType();
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog ● Destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "bark ∪( ●ᴥ ●)∪" << std::endl;
}
