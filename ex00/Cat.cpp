#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat ● Default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << "Cat ● Copy constructor" << std::endl;
	*this = cat;
}

Cat &Cat::operator = (const Cat &cat) {
	std::cout << "Cat ● Copy assignment constructor" << std::endl;
	this->type = cat.getType();
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat ● Destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow ฅ(^◕ᴥ◕^)ฅ" << std::endl;
}
