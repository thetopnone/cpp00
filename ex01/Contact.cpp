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
#include <cstring>

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
	firstName.assign(fn, 0, 10);
	if (fn.length() > 10)
		firstName.replace(9, 1, ".");
}

void Contact::setLastName(std::string ln){
	lastName.assign(ln, 0, 10);
	if (ln.length() > 10)
		lastName.replace(9, 1, ".");
}

void Contact::setNickname(std::string nn){
	nickname.assign(nn, 0, 10);
	if (nn.length() > 10)
		nickname.replace(9, 1, ".");
}

void Contact::setPhoneNumber(std::string pn){
	phoneNumber.assign(pn, 0, 10);
	if (pn.length() > 10)
		phoneNumber.replace(9, 1, ".");
}

void Contact::setDarkestSecret(std::string ds){
	darkestSecret.assign(ds, 0, 10);
	if (ds.length() > 10)
		darkestSecret.replace(9, 1, ".");
}
