/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:34:20 by akonstan          #+#    #+#             */
/*   Updated: 2026/02/11 17:34:21 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Printers.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	printPhonebookField(std::string field){
	std::string	ref = field;

	if (ref.length() > 10)
	{
		ref.resize(10);
		ref.replace(9, 1, ".");
	}
	std::cout << std::setw(10) << std::setfill(' ') << ref;
}

void	printPhoneBook(const PhoneBook &pb){
	std::cout << "--Phone-Book--" << std::endl;
	std::cout << std::setw(10) << std::setfill(' ') << "Indexes";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "Nickname";
	
}

void	printPhoneBookEntry(const Contact &contact){
	printPhonebookField(contact.getIndex());
	std::cout << "|";
	printPhonebookField(contact.getFirstName());
	std::cout << "|";
	printPhoneBookField(contact.getLastName());
	std::cout << "|";
	printPhonebookField(contact.getNickname());
	std::cout << std::endl;
}

void	printContact(const Contact &contact){
	std::cout << "First Name:	" << contact.getFirstName() << std::endl;
	std::cout << "Last Name:	" << contact.getLastName() << std::endl;
	std::cout << "Nickname:		" << contact.getNickname() << std::endl;
	std::cout << "Phone Number:	" << contact.getPhoneNumber() << std::endl;
	std::cout << "Secret:		" << contact.getDarkestSecret() << std::endl;
}
