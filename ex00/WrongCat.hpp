#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

private:

	std::string msg;
	std::string message();

public:

	WrongCat();
	WrongCat(const WrongCat &cat);
	WrongCat &operator = (const WrongCat &cat);
	~WrongCat();

	void makeSound() const;

};

#endif
