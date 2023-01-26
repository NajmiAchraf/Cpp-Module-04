#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

private:

	Brain		*brain;
	std::string	msg;
	std::string	message();

public:

	Brain	*getBrain() const;

	Cat();
	Cat(const Cat &cat);
	Cat &operator = (const Cat &cat);
	~Cat();

	void makeSound() const;

};

#endif
