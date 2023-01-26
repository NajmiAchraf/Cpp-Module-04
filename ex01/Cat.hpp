#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:

	Brain		*brain;
	std::string msg;
	std::string message();

public:

	Brain	*getBrain() const;

	Cat();
	Cat(const Cat &cat);
	Cat &operator = (const Cat &cat);
	~Cat();

	void makeSound() const;

};

#endif
