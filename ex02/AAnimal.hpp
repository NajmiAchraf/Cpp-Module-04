#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {

private:

	std::string msg;
	std::string message();

protected:

	std::string type;

public:

	std::string getType() const;

	AAnimal();
	AAnimal(const AAnimal &animal);
	AAnimal &operator = (const AAnimal &animal);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;

};

#endif
