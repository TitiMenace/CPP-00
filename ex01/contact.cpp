/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:01:40 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/05 16:54:16 by tschecro         ###   ########.fr       */
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

void	Contact::Display_contact_info(size_t index){
	
	std::string output;

	std::cout << std::right << std::setw(10) << index;
	std::cout << "|";
	output = this->First_name;
	if (output.length() > 10)
		output = output.substr(0, 9) + ".";
	std::cout << std::right << std::setw(10) << output;
	std::cout << "|";
	output = this->Last_name;
	if (output.length() > 10)
		output = output.substr(0, 9) + ".";
	std::cout << std::right << std::setw(10) << output;
	std::cout << "|";
	output = this->Nickname;
	if (output.length() > 10)
		output = output.substr(0, 9) + ".";
	std::cout << std::right << std::setw(10) << output << std::endl;
}

void	Contact::Display_contact(void)
{
	std::cout << "First name : " << this->First_name << std::endl;
	std::cout << "Last name : " << this->Last_name << std::endl;
	std::cout << "Nickname : " << this->Nickname << std::endl;
	std::cout << "Phone number : " << this->Phone_number << std::endl;
	std::cout << "Darkest secret : " << this->Darkest_secret << std::endl;
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
		this->First_name.assign(input);
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
		this->Last_name.assign(input);
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
		this->Nickname.assign(input);
		break;
	}
	while (true)
	{
		std::cout << "Enter a phone number:" << std::endl;
		std::getline(std::cin, input);
		if (input.empty()){
			std::cout << "Phone number empty !" << std::endl;
			continue;
		}
		break;
	}
	while (true)
	{
		std::cout << "Enter a Darkest secret:" << std::endl;
		std::getline(std::cin, input);
		if (input.empty()){
			std::cout << "Darkest secret empty !" << std::endl;
			continue;
		}
		this->Darkest_secret.assign(input);
		break;
	}
}
