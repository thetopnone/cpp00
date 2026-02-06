/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:55:33 by akonstan          #+#    #+#             */
/*   Updated: 2026/02/06 18:55:36 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact{
	private:
		int	index;
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact(){
			index = -1;
			firstName = "";
			lastName = "";
			nickname = "";
			phoneNumber = "";
			darkestSecret = "";
			std::cout << "Contact Default Constructor Called" << std::endl;
		}

		Contact(Contact &c){
			std:cout << "Contact Copy Constructor Called" << std::endl;
		}

		Contact &operator=(const Contact &c){
			std:cout << "Contact Copy Assignment Operator Called" << std::endl;
			return *this;
		}

		~Contact(){
			std::cout << "Contact Destructor Called" << std::endl;
		}

		void getIndex() const;
		void getFirstName() const;
		void getLastName() const;
		void getNickname() const;
		void getPhoneNumber() const;
		void getDarkestSecret() const;

		void setIndex(int i);
		void setFirstName(std::string fn);
		void setLastName(std::string ln);
		void setNickname(std::string nn);
		void setPhoneNumber(std::string pn);
		void setDarkestSecret(std::string ds);
}

#endif
