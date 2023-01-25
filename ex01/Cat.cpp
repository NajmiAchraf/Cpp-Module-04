#include "Cat.hpp"

Cat::Cat() : msg("Cat") {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << this->message() << "Default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << this->message() << "Copy constructor" << std::endl;
	*this = cat;
}

Cat &Cat::operator = (const Cat &cat) {
	std::cout << this->message() << "Copy assignment constructor" << std::endl;
	this->type = cat.getType();
	return (*this);
}

Cat::~Cat() {
	delete this->brain;
	std::cout << this->message() << "Destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow ฅ(^◕ᴥ◕^)ฅ" << std::endl;
}

std::string Cat::message() {
	return (this->msg + " ● ");
}
