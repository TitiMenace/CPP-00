#include "Phonebook.hpp"
#include "Contact.hpp"
#include "includes.hpp"

void	Add_command(void){
	
	std::cout << "ADD command confirmed" << std::endl;
}

void	Search_command(void){
	
	std::cout << "SEARCH command confirmed" << std::endl;
}

void	Exit_command(void){
	
	std::cout << "EXIT command confirmed" << std::endl;
}





int	main(void){

	//Contact		contact[8];
	Phonebook	book;
	std::string	yo;
	while (true){
		std::cout << "Enter a command : "<< std::endl;
		std::getline(std::cin, yo);
		input_treat(yo);	
	}
	std::cout << yo << std::endl;
	return 0;
}
