#include "Phonebook.hpp"
#include "Contact.hpp"
#include "includes.hpp"

void	Add_command(std::string input){
	
	if (input == "ADD")
		std::cout << "ADD command confirmed" << std::endl;
}

void	Search_command(std::string input){
	
	if (input == "SEARCH")
		std::cout << "SEARCH command confirmed" << std::endl;
}

void	Exit_command(std::string input){
	
	if (input == "EXIT")
		std::cout << "EXIT command confirmed" << std::endl;
}

int	main(void){

	//Contact		contact[8];
	Phonebook	book;
	std::string	yo;
	while (true){
		std::cout << "Enter a command : "<< std::endl;
		std::getline(std::cin, yo);
		Add_command(yo);
		Search_command(yo);
		Exit_command(yo);
	}
	std::cout << yo << std::endl;
	return 0;
}
