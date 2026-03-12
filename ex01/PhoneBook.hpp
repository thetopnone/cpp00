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
# include <iomanip>

class PhoneBook{
	private:
		int	contactAmount;
		Contact contacts[8];
	public:
		PhoneBook(){
			contactAmount = 0;
		}
		PhoneBook(PhoneBook&){
		}
		PhoneBook &operator=(const PhoneBook&){
			return *this;
		}
		~PhoneBook(){
		}
		void	addContact();
		void	searchContact();
		void	printPhoneBook();
		Contact	&getContact(int index);
};
#endif
