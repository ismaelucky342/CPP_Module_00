/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P_book.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2025/04/07 12:23:30 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_BOOK_HPP
#define P_BOOK_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <readline/readline.h>
#include <readline/history.h>

/*=================================INCLUDES=================================*/

#include "contact.hpp"
#include <string>

/*=================================DEFINES=================================*/

#define FNAME "First Name: "
#define LNAME "Last Name: "
#define NNAME "Nick Name: "
#define PNBR "Phone Numbre: "
#define SEC "Secret: "

std::string truncate(const std::string &str);

/*=================================CLASS BOOK================================*/

class Book
{

	private:
		int index;
		Contact people[8];

		void info_print(int index);

	public:
		Book() : index(-1) {};
		void info_add(std::string fname, std::string lname, std::string nname, std::string phone, std::string sec);
		void info_serch(std::string cindex);
		bool check_nbr(std::string str);
		void print_agenda(void);
};

#endif