#include "Cat.hpp"

Brain *Cat::getBrain() const {
	return (this->brain);
}

Cat::Cat() {
	std::cout << "Cat ● Default constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat) : AAnimal(cat) {
	std::cout << "Cat ● Copy constructor" << std::endl;
	this->brain = new Brain();
	*this = cat;
}

Cat &Cat::operator = (const Cat &cat) {
	std::cout << "Cat ● Copy assignment constructor" << std::endl;
	if (this != &cat) {
		delete this->brain;
		this->brain = new Brain();
		*this->brain = *cat.getBrain();
		this->AAnimal::operator=(cat);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat ● Destructor" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const {
	std::cout << "meow ฅ(^◕ᴥ◕^)ฅ" << std::endl;
}
