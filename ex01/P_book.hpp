/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P_book.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/11 17:47:01 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_BOOK_HPP
#define P_BOOK_HPP
#include "contact.hpp"
#include <string>
#define FNAME "First Name: "
#define LNAME "Last Name: "
#define NNAME "Nick Name: "
#define PNBR "Phone Numbre: "
#define SEC "Secret: "

std::string truncate(const std::string &str);

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
		void Book::print_agenda(void);
};

#endif