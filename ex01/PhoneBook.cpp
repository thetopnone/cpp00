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
#include "Printers.hpp"
#include <cstring>
#include <cstdlib>

PhoneBook::PhoneBook()
	:contactAmount(0)
{}

PhoneBook::PhoneBook(const PhoneBook &other)
{
	contactAmount = other.contactAmount;
	for (int i = 0; i < 8; i++)
		contacts[i] = other.contacts[i];
}

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		contactAmount = other.contactAmount;
		for (int i = 0; i < 8; i++)
			contacts[i] = other.contacts[i];
	}
	return (*this);
}

PhoneBook::~PhoneBook(){}

static void addFirstName(Contact &contact){
	std::string input;
	std::cout << "Enter First Name: ";
	std::cin >> input;
	contact.setFirstName(input);
	std::cout << std::endl;
}

static void addLastName(Contact &contact){
	std::string input;

	std::cout << "Enter Last Name: ";
	std::cin >> input;
	contact.setLastName(input);
	std::cout << std::endl;
}

static void	addNickname(Contact &contact){
	std::string input;

	std::cout << "Enter Nickname: ";
	std::cin >> input;
	contact.setNickname(input);
	std::cout << std::endl;
}

static void	addPhoneNumber(Contact &contact){
	std::string input;

	std::cout << "Enter Phone Number: ";
	std::cin >> input;
	contact.setPhoneNumber(input);
	std::cout << std::endl;
}

static void	addDarkestSecret(Contact &contact){
	std::string input;

	std::cout << "Enter Darkest Secret: ";
	std::cin >> input;
	contact.setDarkestSecret(input);
	std::cout << std::endl;
}

void PhoneBook::addContact(){
	std::cout << std::endl;
	contacts[contactAmount % 8].setIndex(contactAmount % 8);
	addFirstName(contacts[contactAmount % 8]);
	addLastName(contacts[contactAmount % 8]);
	addNickname(contacts[contactAmount % 8]);
	addPhoneNumber(contacts[contactAmount % 8]);
	addDarkestSecret(contacts[contactAmount % 8]);
	contactAmount++;
}

Contact	&PhoneBook::getContact(int index){
	return (contacts[index]);
}

void	PhoneBook::printPhoneBook(){
	std::cout << "--Phone-Book--\n" << std::endl;
	std::cout << std::setw(10) << std::setfill(' ') << "Indexes";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "Nickname" << std::endl;
	for(int i = 0; i < 8; i++){
		if (contacts[i].getIndex() != -1)
			printPhoneBookEntry(contacts[i]);
	}
	std::cout << std::endl;
}

static int checkIndexInput(const char *str){
	while (*str && isdigit(*str))
		str++;
	if (*str == '\0')
		return (0);
	return (1);
}

void PhoneBook::searchContact(){
	std::string input;
	int			index;

	std::cout << std::endl;
	if (contactAmount == 0){
		std::cout << "Phone Book is still empty\nPlease first enter a contact using ADD\n" << std::endl;
		return ;
	}
	printPhoneBook();
	std::cout << "Enter Contact index for details: ";
	std::cin >> input;
	while (checkIndexInput(input.c_str()) == 1){
		std::cout << "\nInvalid index\nPlease enter a valid index: ";
		std::cin >> input;
	}
	index = std::atoi(input.c_str());
	while (index < 0 || index >= contactAmount || index > 7){
		std::cout << "\nIndex out of range\nPlease enter a valid index: ";
		std::cin >> input;
		index = std::atoi(input.c_str());
	}
	printContact(getContact(index));
	std::cout << std::endl;
}
