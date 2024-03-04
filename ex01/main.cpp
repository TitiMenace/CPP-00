/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:34:31 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/04 17:41:31 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include "includes.hpp"






int	main(void){

	//Contact		contact[8];
	Phonebook	book;
	std::string	yo;
	while (true){
		std::cout << "Enter a command : "<< std::endl;
		std::getline(std::cin, yo);
		book.Input_treat(yo);	
	}
	std::cout << yo << std::endl;
	return 0;
}
