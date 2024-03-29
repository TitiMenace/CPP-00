/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:01:07 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/05 17:30:19 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"
#include "includes.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void){
	std::cout << "Phonebook Constructor called" << std::endl;
	this->index = 0;
	return;
}

Phonebook::~Phonebook(void){
	std::cout << "Phonebook Destructor called" << std::endl;
	return;
}

void	Phonebook::Add_command(void){
	
	std::cout << "ADD command confirmed" << std::endl;

	this->contacts[index].Add_contact();
	this->index++;
	if (this->index >= 8)
		this->index = 0;
}

void	Phonebook::Search_command(void){
	
	std::string input;
	size_t	index = 0;


	std::cout << "SEARCH command confirmed" << std::endl;
	for (int x = 0; x < 8; x++)
		this->contacts[x].Display_contact_info(x + 1);
	while (true)
	{
		std::cout << "Choose a Contact to diplay !" << std::endl;
		std::getline(std::cin, input);
		index = atoi(input.c_str());
		if (index < 1 || index > 8){
			std::cout << "Your input isn't a Contact index" << std::endl;
				continue;
		}
		this->contacts[index - 1].Display_contact();
		break;
	}
}

void	Phonebook::Exit_command(void){
	
	std::cout << "EXIT command confirmed" << std::endl;
	exit(1);
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

