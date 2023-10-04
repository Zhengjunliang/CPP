/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:41:15 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/06 10:41:16 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";" << "total:" << Account::_totalAmount  << ";"
        << "deposits:" << Account::_totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount  << ";created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount  << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << p_amount << ";" << "deposit:" << deposit
        << ";" << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawal:";
    if( withdrawal <= _amount)
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << withdrawal << ";" << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        std::cout << "refused" << std::endl;
        return false;
    }
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount  << ";" << "deposits:" << _nbDeposits  
        << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t now = time(0);

	tm ltm = *localtime(&now);
	std::cout << std::setfill('0') << "[" << (ltm.tm_year + 1900)
			  << std::setw(2) << ltm.tm_mon + 1
			  << std::setw(2) << ltm.tm_mday << "_"
			  << std::setw(2) << ltm.tm_hour
			  << std::setw(2) << ltm.tm_min
			  << std::setw(2) << ltm.tm_sec << "] ";
}
