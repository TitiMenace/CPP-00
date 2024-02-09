/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:04:40 by tschecro          #+#    #+#             */
/*   Updated: 2024/02/09 17:17:48 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"


Phonebook::Phonebook(void){
	std::cout << "Phonebook Constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void){
	std::cout << "Phonebook Destructor called" << std::endl;
	return;
}
