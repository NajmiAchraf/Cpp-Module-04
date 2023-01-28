#include "Dog.hpp"

Brain *Dog::getBrain() const {
	return (this->brain);
}

Dog::Dog() {
	std::cout << "Dog ● Default constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog) : AAnimal(dog) {
	std::cout << "Dog ● Copy constructor" << std::endl;
	this->brain = new Brain();
	*this = dog;
}

Dog &Dog::operator = (const Dog &dog) {
	std::cout << "Dog ● Copy assignment constructor" << std::endl;
	if (this != &dog) {
		delete this->brain;
		this->brain = new Brain();
		*this->brain = *dog.getBrain();
		this->AAnimal::operator=(dog);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog ● Destructor" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {
	std::cout << "bark ∪( ●ᴥ ●)∪" << std::endl;
}
