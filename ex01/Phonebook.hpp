/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:54:14 by tschecro          #+#    #+#             */
/*   Updated: 2024/02/13 14:49:19 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "includes.hpp"
# include "Contact.hpp"


class Phonebook{

	public:

		void	input_treat(std::string input);
		Phonebook(void);
		~Phonebook(void);

	private:
		
		Contact	contacts[8];
};

#endif
