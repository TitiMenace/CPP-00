
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




void	Phonebook::Add_command(void){
	
	
	std::cout << "ADD command confirmed" << std::endl;
	if (this->index++ > 8)
		this->index = 0;
	this->contacts[index].Add_contact();
	
}

void	Phonebook::Search_command(void){
	
	std::cout << "SEARCH command confirmed" << std::endl;
}

void	Phonebook::Exit_command(void){
	
	std::cout << "EXIT command confirmed" << std::endl;
}


void	Phonebook::Input_treat(std::string	input){
	if (input == "ADD")
		Add_command();
	else if (input == "SEARCH")
		Search_command();
	else if (input == "EXIT")
		Exit_command();
	else
		return;
}

