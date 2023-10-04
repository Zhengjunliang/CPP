/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:41:57 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/06 09:41:58 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
using std::string;

class Contact
{
private:
	string	_firstName;
	string	_lastName;
	string	_nickName;
	string	_phoneNumber;
	string	_darkSecret;
	int index;
public:
	Contact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret, int index);
	Contact();

	 string getFirstName();
    string getLastName();
    string getNickName();
    string getPhoneNumber();
    string getDarkestSecret();
    int getIndex();
};

#endif
