/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:01:40 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/04 16:37:13 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "includes.hpp"


Contact::Contact(void){
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){
	std::cout << "Contact Destructor called" << std::endl;
	return;
}

void	Contact::Add_contact(void){

	std::string	input;
	while (true)
	{
		std::cout << "Enter a first name:" << std::endl;
		std::getline(std::cin, input);
		if (input.empty()){
			std::cout << "First name empty !" << std::endl;
			continue;
		}
		this->First_name = input;
		break;
	}
	while (true)
	{
		std::cout << "Enter a last name:" << std::endl;
		std::getline(std::cin, input);
		if (input.empty()){
			std::cout << "Last name empty !" << std::endl;
			continue;
		}
		this->First_name = input;
		break;
	}
	while (true)
	{
		std::cout << "Enter a nickname:" << std::endl;
		std::getline(std::cin, input);
		if (input.empty()){
			std::cout << "Nickname empty !" << std::endl;
			continue;
		}
		this->First_name = input;
		break;
	}
	while (true)
	{
		std::cout << "Enter a phone number:" << std::endl;
		std::getline(std::cin, input);
		if (input.empty()){
			std::cout << "Phone number empty !" << std::endl;
			continue;
		if ()
		}
		this->First_name = input;
		break;
	}
}
