/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:01:40 by tschecro          #+#    #+#             */
/*   Updated: 2024/02/09 17:17:21 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"


Contact::Contact(void){
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){
	std::cout << "Contact Destructor called" << std::endl;
	return;
}
