#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "******* Animal Section *******" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound! j->makeSound();
	i->makeSound(); //will output the cat sound! i->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << "******* WrongAnimal Section *******" << std::endl;

	const WrongAnimal* Bmeta = new WrongAnimal();
	const WrongAnimal* Bi = new WrongCat();

	Bi->makeSound(); //will output the cat sound! i->makeSound();
	Bmeta->makeSound();

	delete Bi;
	delete Bmeta;

	return 0;
}
