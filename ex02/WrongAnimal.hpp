#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

private:

	std::string msg;
	std::string message();

protected:

	std::string type;

public:

	std::string getType() const;

	WrongAnimal();
	WrongAnimal(const WrongAnimal &animal);
	WrongAnimal &operator = (const WrongAnimal &animal);
	~WrongAnimal();

	void makeSound() const;

};

#endif
