#include "Phonebook.hpp"
#include "Contact.hpp"
#include "includes.hpp"

int	main(void){

	//Contact		contact[8];
	Phonebook	book;
	std::string	yo;
	std::cout << "Enter a command : "<< std::endl;

	std::getline(std::cin, yo);

	std::cout << yo << std::endl;

	return 0;
}
