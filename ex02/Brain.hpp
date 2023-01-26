#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

private:

	std::string	ideas[100];

public:

	std::string	getIdea(int i) const;
	void		setIdea(int i, std::string idea);

	Brain();
	Brain(const Brain &brain);
	Brain &operator = (const Brain &brain);
	~Brain();

};


#endif
