/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:42:13 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/06 09:42:14 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	int next;
    int fill;
	Contact _contacts[8];
public:
	PhoneBook();
	void addContact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret);
    Contact getContact(int id);
    int getFill();
};

#endif

