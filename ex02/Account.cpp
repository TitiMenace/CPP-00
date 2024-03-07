/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:51:29 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/07 18:01:50 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp" 
#include <iostream>
#include <string>

Account::Account(int initial_deposit){

		Account::_nbAccounts++;
		Account::_accountIndex = Account::_nbAccounts - 1;
		Account::_amount = initial_deposit;
		Account::_totalAmount += initial_deposit;
		_displayTimestamp(); 
		std::cout << "index:" << Account::_accountIndex << ";";
		std::cout << "amount:" << Account::_amount << ";";
		std::cout << "created" << std::endl;
}

Account::~Account(void){

		_displayTimestamp(); 
		std::cout << "index:" << Account::_accountIndex << ";";
		std::cout << "amount:" << Account::_amount << ";";
		std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos(void){
		
		_displayTimestamp(); 
		std::cout << "accounts:" << Account::_nbAccounts << ";";		
		std::cout << "total:" << Account::_totalAmount << ";";		
		std::cout << "deposits:" << Account::_totalNbDeposits << ";";		
		std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;		
}
