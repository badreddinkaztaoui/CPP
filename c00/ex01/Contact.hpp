/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:33:59 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/01/17 13:48:32 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	// Setters
	int	setFirstName(std::string firstName);
	int	setLastName(std::string lastName);
	int	setNickname(std::string nickname);
	int	setPhoneNumber(std::string phoneNumber);
	int	setDarkestSecret(std::string darkestSecret);
	// Getters
	void	printContact(int index);
	void	printContactInfo(void);
};

#endif