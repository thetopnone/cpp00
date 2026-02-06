/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:55:28 by akonstan          #+#    #+#             */
/*   Updated: 2026/02/06 18:55:30 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook{
	private:
		int	contactAmount;
		Contacts contacts[8];
	public:
		PhoneBook(){
			contactAmount = 0;
			std::cout << "PhoneBook Default Constructor Called" << std::endl;
		}
		PhoneBook(PhoneBook &pb){
			std::cout << "PhoneBook Copy Constructor Called" << std::endl;
		}
		PhoneBook &operator=(const PhoneBook &pb){\
			std::cout << "PhoneBook Copy Assignment Operator Called" << std::endl;
		}
		~PhoneBook(){
			std::cout <<"PhoneBook Destructor Called" << std::endl;
		}
		void addContact();
		void searchContact();
}

#endif
