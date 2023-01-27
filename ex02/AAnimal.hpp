#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {

protected:

	std::string type;

public:

	std::string getType() const;

	AAnimal();
	AAnimal(const AAnimal &Aanimal);
	AAnimal &operator = (const AAnimal &Aanimal);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;

};

#endif
