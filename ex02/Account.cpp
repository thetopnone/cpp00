/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:41:31 by akonstan          #+#    #+#             */
/*   Updated: 2026/03/16 12:41:32 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void){
	return (_nbAccounts);
}

int Account::getTotalAmount(void){
	return (_totalAmount);
}

int Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" <<getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit){
	int	p_amount = checkAmount();

	_displayTimestamp();
	if (deposit < 0)
	{
		std::cout << "Error:Negative Deposit amount!!!" << std::endl;
		return ;
	}
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount +=  deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount;
	std::cout << ";deposit:" << deposit << ";amount:" << checkAmount();
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	int	p_amount = checkAmount();

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount;
	if (p_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << checkAmount();
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const{
	return(_amount);
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void Account::_displayTimestamp(void){
	struct tm *times;
	time_t	gettime;

	time(&gettime);
	times = localtime(&gettime);
	std::cout << "[" << (1900 + times->tm_year) * 10000 + (times->tm_mon + 1) * 100 + times->tm_mday;
	std::cout << "_" << times->tm_hour * 10000 + times->tm_min  * 100 + times->tm_sec << "] ";
}

Account::Account(int initial_deposit)
	:_accountIndex(_nbAccounts)
	,_amount(initial_deposit)
	,_nbDeposits(0)
	,_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";ammount:" << checkAmount() << ";created";
	std::cout << std::endl;
	_nbAccounts++;
	_totalAmount+= initial_deposit;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";ammount:" << checkAmount() << ";closed";
	std::cout << std::endl;

}
