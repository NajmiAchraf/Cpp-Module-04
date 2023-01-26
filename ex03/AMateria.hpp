#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {

protected:

	std::string		_type;
	unsigned int	_xp;

public:

	const std::string	&getType() const;
	unsigned int		getXP() const;

	AMateria();
	AMateria(const std::string & type);
	AMateria(const AMateria & Amateria);
	AMateria & operator = (const AMateria & Amateria);
	virtual ~AMateria();

	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter& target);

};

#endif
