/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:10:00 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/01/17 15:19:00 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	c_print(std::string msg, int flag) {
	if (flag == 0)
		std::cout << "\033[1;32m" << msg << "\033[0m" << std::endl;
	else if (flag == 1)
		std::cout << "\033[1;31m" << msg << "\033[0m" << std::endl;
	else
		std::cout << msg << std::endl;
}

std::string trim(std::string str) {
	size_t first = str.find_first_not_of(' ');
	if (std::string::npos == first)
      return (str);
	size_t last = str.find_last_not_of(' ');
	return (str.substr(first, (last - first + 1)));
}

std::string	truncat(std::string str) {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

int	Contact::setFirstName(std::string firstName) {
	firstName = trim(firstName);
	if (firstName.empty()) {
		c_print("First name can't be empty", 1);
		return (1);
	} else {
		for (size_t i = 0; i < firstName.length(); i++) {
			if (!isalpha(firstName[i])) {
				c_print("First name must be alphabetic", 1);
				return (1);
			}
		}
		this->firstName = firstName;
	}
	return (0);
}

int	Contact::setLastName(std::string lastName) {
	lastName = trim(lastName);
	if (lastName.empty()) {
		c_print("Last name can't be empty", 1);
		return (1);
	} else {	
		for (size_t i = 0; i < lastName.length(); i++) {
			if (!isalpha(lastName[i])) {
				c_print("Last name must be alphabetic", 1);
				return (1);
			}
		}
		this->lastName = lastName;
	}
	return (0);
}

int	Contact::setNickname(std::string nickname) {
	nickname = trim(nickname);
	if (nickname.empty()) {
		c_print("Nickname can't be empty", 1);
		return (1);
	} else {
		for (size_t i = 0; i < nickname.length(); i++) {
			if (!isalnum(nickname[i])) {
				c_print("Nickname must be alphanumeric", 1);
				return (1);
			}
		}
		this->nickname = nickname;
	}
	return (0);
}

int	Contact::setPhoneNumber(std::string phoneNumber) {
	phoneNumber = trim(phoneNumber);
	if (phoneNumber.empty()) {
		c_print("Phone number can't be empty", 1);
		return (1);
	} else {
		for (size_t i = 0; i < phoneNumber.length(); i++) {
			if (!isdigit(phoneNumber[i])) {
				c_print("Phone number must be numeric", 1);
				return (1);
			}
		}
		this->phoneNumber = phoneNumber;
	}
	return (0);
}

int	Contact::setDarkestSecret(std::string darkestSecret) {
	darkestSecret = trim(darkestSecret);
	if (darkestSecret.empty()) {
		c_print("Darkest secret can't be empty", 1);
		return (1);
	} else {
		for (size_t i = 0; i < darkestSecret.length(); i++) {
			if (!isalnum(darkestSecret[i])) {
				c_print("Darkest secret must be alphanumeric", 1);
				return (1);
			}
		}
		this->darkestSecret = darkestSecret;
	}
	return (0);
}

void	Contact::printContact(int index) {
	std::cout << "|" << std::setw(10) << index << "|";
	std::cout << std::setw(10) << truncat(this->firstName) << "|";
	std::cout << std::setw(10) << truncat(this->lastName) << "|";
	std::cout << std::setw(10) << truncat(this->nickname) << "|" << std::endl;
}

void	Contact::printContactInfo(void) {
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}