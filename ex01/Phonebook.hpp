/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:54:14 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/05 16:46:43 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "includes.hpp"
# include "Contact.hpp"


class Phonebook{

	public:

		void	Input_treat(std::string input);
		Phonebook(void);
		~Phonebook(void);

	private:
		
		void	Add_command(void);
		void	Search_command(void);
		void	Exit_command(void);
		Contact	contacts[8];
		size_t		index;
};

#endif
