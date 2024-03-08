/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:51:29 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/08 16:14:57 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp" 
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void){
	
	char		timestamp[20];
	std::time_t	now = std::time(NULL);
	std::tm	*timeinfo = std::localtime(&now);

	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << timestamp;
}

Account::Account(int initial_deposit){

		_nbAccounts++;
		this->_accountIndex = _nbAccounts - 1;
		this->_amount = initial_deposit;
		_totalAmount += initial_deposit;
		_displayTimestamp(); 
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "created" << std::endl;
}

Account::~Account(void){

		_displayTimestamp(); 
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos(void){
		
		_displayTimestamp(); 
		std::cout << "accounts:" << _nbAccounts << ";";		
		std::cout << "total:" << _totalAmount << ";";		
		std::cout << "deposits:" << _totalNbDeposits << ";";		
		std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;		
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
		_totalAmount += deposit;
		this->_nbDeposits++;
		_totalNbDeposits++;
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
			_totalAmount -= withdrawal;
			this->_nbWithdrawals++;
			_totalNbWithdrawals++;
			std::cout << "amount:" << this->_amount << ";";
			std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
			return (true);
		}
}
