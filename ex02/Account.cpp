/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:28:33 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/09 17:23:14 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){

	_amount = initial_deposit;
	_accountIndex = _nbAccounts ++;
	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "created" << std::endl;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_totalAmount += _amount;
}

Account::~Account( void ){

	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";"
	          << "amount:"<< _amount << ";"
			  << "closed" << std::endl;
}

int	Account::getNbAccounts( void ){

	return _nbAccounts;
}

int	Account::getTotalAmount( void ){

	return _totalAmount;
}

int	Account::getNbDeposits( void ){

	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){

	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){

	_displayTimestamp ();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){

	_displayTimestamp ();
	_nbDeposits ++;
	_totalNbDeposits ++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";"
			  << "deposits:" << deposit << ";"
			  << "amount:" << _amount + deposit << ";"
			  << "nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){

	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";";
	if (withdrawal > _amount){
		
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	_nbWithdrawals ++;
	_totalNbWithdrawals ++;
	_totalAmount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal<< ";"
			  << "amount:" << _amount - withdrawal << ";"
			  << "nb_withdrawals:" << _nbWithdrawals<< std::endl;
	_amount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const {

	return _amount;
}

void	Account::displayStatus( void ) const {

	_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {

    std::time_t now = std::time(0);
    struct tm *now_tm = std::localtime(&now);

    std::cout << '[';
    std::cout << (1900 + now_tm->tm_year);

    std::cout << std::setfill('0') << std::setw(2);
    std::cout << (now_tm->tm_mon + 1);

    std::cout << std::setfill('0') << std::setw(2);
    std::cout << now_tm->tm_mday;

    std::cout << '_';

    std::cout << std::setfill('0') << std::setw(2);
    std::cout << now_tm->tm_hour;

    std::cout << std::setfill('0') << std::setw(2);
    std::cout << now_tm->tm_min;

    std::cout << std::setfill('0') << std::setw(2);
    std::cout << now_tm->tm_sec;

    std::cout << "] ";
}



Account::Account( void ){

}