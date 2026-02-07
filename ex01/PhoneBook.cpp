/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 22:13:44 by akonstan          #+#    #+#             */
/*   Updated: 2026/02/06 22:13:45 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


static void addFirstName(Contact *contact){
	std::string input;
	std::cout << "Enter the First Name: " << std::endl;
	std::cin >> input;
	contact->setFirstName(input);
}

static void addLastName(Contact *contact){
	std::string input;
	std::cout << "Enter the Last Name: " << std::endl;
	std::cin >> input;
	contact->setLastName(input);
}

void PhoneBook::addContact(){
	
	Contact *contact = &contacts[contactAmount % 7];
	addFirstName(contact);
	addLastName(contact);
	std::cout << contact->getFirstName() << std::endl;
	std::cout << contact->getLastName() << std::endl;
}

