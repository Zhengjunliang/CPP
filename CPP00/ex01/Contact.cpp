/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:40:53 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/06 09:40:54 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret, int index)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_nickName = nickName;
    this->_phoneNumber = phoneNumber;
    this->_darkSecret = darkestSecret;
    this->index = index;
}

Contact::Contact(){}

string Contact::getDarkestSecret()
{
    return _darkSecret;
}
string Contact::getFirstName()
{
    return _firstName;
}
string Contact::getLastName()
{
    return _lastName;
}
string Contact::getPhoneNumber()
{
    return _phoneNumber;
}
string Contact::getNickName()
{
    return _nickName;
}
int Contact::getIndex()
{
    return index;
}