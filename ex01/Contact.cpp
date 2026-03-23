/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 22:14:04 by akonstan          #+#    #+#             */
/*   Updated: 2026/02/06 22:14:06 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Printers.hpp"

//CONSTRUCTOR AND DECONSTRUCTOR FOR THE CONTACT CLASS
Contact::Contact()
	:index(-1)
	,firstName("")
	,lastName("")
	,nickname("")
	,phoneNumber("")
	,darkestSecret("")
{}

Contact::Contact(const Contact &other)
{
	index = other.index;
	firstName = other.firstName;
	lastName = other.lastName;
	nickname = other.nickname;
	phoneNumber = other.phoneNumber;
	darkestSecret = other.darkestSecret;
}

Contact &Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		index = other.index;
		firstName = other.firstName;
		lastName = other.lastName;
		nickname = other.nickname;
		phoneNumber = other.phoneNumber;
		darkestSecret = other.darkestSecret;
	}
	return (*this);
}

Contact::~Contact(){}

//Getters for the Contact class
int Contact::getIndex() const{
	return index;
}

std::string Contact::getFirstName() const{
	return firstName;
}

std::string Contact::getLastName() const{
	return lastName;
}

std::string Contact::getNickname() const{
	return nickname;
}

std::string Contact::getPhoneNumber() const{
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const{
	return darkestSecret;
}

//Setters for the Contact class
void Contact::setIndex(int i){
	index = i;
}

void Contact::setFirstName(std::string fn){
	firstName = fn;
}

void Contact::setLastName(std::string ln){
	lastName = ln;
}

void Contact::setNickname(std::string nn){
	nickname = nn;
}

void Contact::setPhoneNumber(std::string pn){
	phoneNumber = pn;
}

void Contact::setDarkestSecret(std::string ds){
	darkestSecret = ds;
}
