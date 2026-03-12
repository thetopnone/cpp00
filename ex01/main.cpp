/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:55:40 by akonstan          #+#    #+#             */
/*   Updated: 2026/02/06 18:55:41 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <cstdlib>

void	inputHandler(PhoneBook &pb){
	std::string input;

	std::cin >> input;
	if (input.compare("ADD") == 0)
		pb.addContact();
	else if (input.compare("SEARCH") == 0)
		pb.searchContact();
	else if (input.compare("EXIT") == 0)
		std::exit(0);
	else
		std::cout << "Invalid action\n" << std::endl;
}

int	main(void){
	PhoneBook 	phoneBook;

	std::cout << "Welcome to the Incredible Phonebook!\n" << std::endl;
	while (1)
	{
		std::cout << "Your available actions are:\n" << std::endl;
		std::cout << "	ADD: add a new contact to the phonebook" << std::endl;
		std::cout << "	SEARCH: search for an existing contact" << std::endl;
		std::cout << "	EXIT: exit the phonebook\n" << std::endl;
		std::cout << "Choose your desired action: ";
		inputHandler(phoneBook);
	}
	return (1);
}
