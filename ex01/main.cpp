#include "Cat.hpp"
#include "Dog.hpp"

void test0() {
	std::cout << "******* Animal Section *******" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k;

	k = i;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound! j->makeSound();
	i->makeSound(); //will output the cat sound! i->makeSound();
	k->makeSound(); //will output the cat sound! k->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
}

void test1()
{
	const int a = 2;
	Animal	*animals[a];

	for (int i = 0; i != a / 2; ++i)
		animals[i] = new Cat();
	for (int i = a / 2; i != a; ++i)
		animals[i] = new Dog();
	for(int i = 0; i != a ; ++i)
		delete animals[i];
}

void test2() {
	Cat cat;
	{
		std::cout << "--------------------------------"<<std::endl;
		Cat kitten = cat;
		std::cout << "--------------------------------"<<std::endl;
		cat = kitten;
		std::cout << "--------------------------------"<<std::endl;
	}
	Dog dog;
	{
		std::cout << "--------------------------------"<<std::endl;
		Dog poppy = dog;
		std::cout << "--------------------------------"<<std::endl;
	}
}

void test_shalow() {
	Cat cat;
	Cat klb;

	cat.getBrain()->setIdea(0, "ruff, ruff, 1 dog");
	klb.getBrain()->setIdea(0, "woof, woof, 2 dog");
	std::cout << "--------------------------------"<<std::endl;
	std::cout <<  cat.getBrain()->getIdea(0)<<std::endl;
	std::cout <<  klb.getBrain()->getIdea(0)<<std::endl;
	klb = cat;
	std::cout << "--------------------------------"<<std::endl;
	std::cout <<  cat.getBrain()->getIdea(0)<<std::endl;
	std::cout <<  klb.getBrain()->getIdea(0)<<std::endl;
	cat.getBrain()->setIdea(0, "how, how,   3 dog");
	std::cout << "--------------------------------"<<std::endl;
	std::cout <<  cat.getBrain()->getIdea(0)<<std::endl;
	std::cout <<  klb.getBrain()->getIdea(0)<<std::endl;
	std::cout << "--------------------------------"<<std::endl;
}

void test_fill_animal() {
	Cat	originalCat;
	Cat	copyCat	= originalCat;

	std::cout << "------------------------------------------------------------"<<std::endl;
	std::cout << std::endl << originalCat.getBrain() << " original VS copy ";
	std::cout << copyCat.getBrain() << std::endl << std::endl;
	std::cout << "------------------------------------------------------------"<<std::endl;
}

int main()
{
	test0();
	test1();
	test2();
	test_fill_animal();
	test_shalow();
	// system("leaks Animal");
	return 0;
}
