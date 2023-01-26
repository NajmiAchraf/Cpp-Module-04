#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

private:

	Brain		*brain;
	std::string msg;
	std::string message();

public:

	Brain	*getBrain() const;

	Dog();
	Dog(const Dog &dog);
	Dog &operator = (const Dog &dog);
	~Dog();

	void makeSound() const;

};

#endif
