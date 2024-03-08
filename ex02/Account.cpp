/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:51:29 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/08 15:46:38 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp" 
#include <iostream>
#include <string>

Account::Account(int initial_deposit){

		Account::_nbAccounts++;
		this->_accountIndex = Account::_nbAccounts - 1;
		this->_amount = initial_deposit;
		Account::_totalAmount += initial_deposit;
		_displayTimestamp(); 
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
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

void	Account::displayStatus( void ) const{
			
		_displayTimestamp(); 
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "deposits:" << this->_nbDeposits << ";";		
		std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;		
}

void	Account::makeDeposit(int deposit){

		_displayTimestamp(); 
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout << "deposit:" << deposit << ";";		
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;		
}

bool	Account::makeWithdrawal(int	withdrawal){
	
		_displayTimestamp(); 
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:";
		if (withdrawal > this->_amount){
			std::cout << "refused" << std::endl;
			return (false);
		}
		else {
			std::cout << withdrawal << ";";
			this->_amount -= withdrawal;
			Account::_totalAmount -= withdrawal;
			this->_nbWithdrawals++;
			Account::_totalNbWithdrawals++;
			std::cout << "amount:" << this->_amount << ";";
			std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
			return (true);
		}
}
