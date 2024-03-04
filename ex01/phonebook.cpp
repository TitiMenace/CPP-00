
#include "Phonebook.hpp"
#include "includes.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void){
	std::cout << "Phonebook Constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void){
	std::cout << "Phonebook Destructor called" << std::endl;
	return;
}

void	Phonebook::input_treat(std::string	input){
	if (input == "ADD")
		Add_command();
	else if (input == "SEARCH")
		Search_command();
	else if (input == "EXIT")
		Exit_command();
	else
		return;
}

