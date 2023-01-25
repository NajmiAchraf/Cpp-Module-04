#include "WrongCat.hpp"


WrongCat::WrongCat() : msg("WrongCat") {
	this->type = "WrongCat";
	this->brain = new Brain();
	std::cout << this->message() << "Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) {
	std::cout << this->message() << "Copy constructor" << std::endl;
	*this = cat;
}

WrongCat &WrongCat::operator = (const WrongCat &cat) {
	std::cout << this->message() << "Copy assignment constructor" << std::endl;
	this->type = cat.getType();
	return (*this);
}

WrongCat::~WrongCat() {
	delete this->brain;
	std::cout << this->message() << "Destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "meow ฅ(^◕ᴥ◕^)ฅ" << std::endl;
}

std::string WrongCat::message() {
	return (this->msg + " ● ");
}
