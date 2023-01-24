#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

private:

	std::string msg;
	std::string message();

public:

	Cat();
	Cat(const Cat &cat);
	Cat &operator = (const Cat &cat);
	~Cat();

	void makeSound() const;

};

#endif
