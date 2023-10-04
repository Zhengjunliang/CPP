/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:42:08 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/06 09:42:09 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    next = 0;
    fill = -1;
}

void PhoneBook::addContact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret)
{
    _contacts[next] = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret, next);
    if (fill < 7)
        fill++;
    if (next == 7)
        next = 0;
    else
        next++;
}

Contact PhoneBook::getContact(int id)
{
    return _contacts[id];
}

int PhoneBook::getFill()
{
    return fill;
}