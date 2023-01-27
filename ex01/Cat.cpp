#include "Cat.hpp"

Brain *Cat::getBrain() const {
	return (this->brain);
}

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat ● Default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << "Cat ● Copy constructor" << std::endl;
	*this = cat;
}

Cat &Cat::operator = (const Cat &cat) {
	std::cout << "Cat ● Copy assignment constructor" << std::endl;
	this->brain = new Brain(*cat.brain);
	this->type = cat.getType();
	return (*this);
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat ● Destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow ฅ(^◕ᴥ◕^)ฅ" << std::endl;
}
