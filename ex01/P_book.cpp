/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P_book.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/09 17:14:18 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.hpp"
#include <sstream>


void	Book::info_add(std::string fname, std::string lname, std::string nname, std::string phone, std::string sec){

	index = (index + 1) % 8;
	people[index].index = index;
	people[index].is_null = true;
	people[index].first_name	= fname;
	people[index].last_name		= lname;
	people[index].nick_name		= nname;
	people[index].phone_num		= phone;
	people[index].secret		= sec;
}

void	Book::info_print(int index){

	std::cout << std::endl;
	std::cout << std::right;
	std::cout << std::setw(10) << "Index" << '|'
			  << std::setw(10) << "FirstName:" << '|'
			  << std::setw(10) << "LastName:" << '|'
			  << std::setw(10) << "NickName:" << '|' << std::endl;
	std::cout << std::setw(10) << people[index].index << '|'
			  << std::setw(10) << truncate(people[index].first_name) << '|'
			  << std::setw(10) << truncate(people[index].last_name) << '|'
			  << std::setw(10) << truncate(people[index].nick_name) << std::endl;
	std::cout << std::endl;
}

std::string truncate(const std::string &str){
    return str.length() > 9 ? str.substr(0, 9) + "." : str;
}


void	Book::info_serch(std::string cindex){

	std::istringstream iss(cindex);
	int	index;
	iss >> index;
	if (index < 0 || index > 7)
		std::cout << "Invalid index !" << std::endl;
	if (people[index].is_null == false)
		std::cout << "There are not infomation!" << std::endl;
	else
		info_print (index);
}

bool	Book::check_nbr(std::string str){

	for (std::string::iterator it = str.begin(); it != str.end(); it ++){
		if (*it < '0' || *it > '9')
			return false;
	}
	return true;
}