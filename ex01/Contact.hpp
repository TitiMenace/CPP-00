/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:56:49 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/04 16:37:14 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "includes.hpp"

class Contact{

	public:
	
		Contact(void);
		~Contact(void);
		void	Add_contact(void);
	
	private:
	
		std::string First_name;
		std::string Last_name;
		std::string Nickname;
		std::string Phone_number;
		std::string Darkest_secret;

};



#endif
