/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printers.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:34:12 by akonstan          #+#    #+#             */
/*   Updated: 2026/02/11 17:34:13 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTERS_HPP
# define PRINTERS_HPP
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

void	printPhoneBookField(std::string field);
void	printPhoneBookEntry(const Contact &contact);
void	printContact(const Contact &contact);
#endif
