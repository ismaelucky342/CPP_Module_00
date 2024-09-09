/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/09 17:13:40 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.hpp"

int	main(){

	std::string	info[5];
	std::string msg[5] = {FNAME, LNAME, NNAME, PNBR, SEC};
	std::string	tem;
	Book	phonebook;

	while (1) 
	{
		std::cout << "Waitting for instruction ...\n";
		std::getline(std::cin, tem);
		if (tem == "ADD"){
			for (int i = 0; i < 5; i ++){
				std::cout << msg[i];
				std::getline(std::cin, info[i]);
				if (info[i] == "EXIT")
					return 0;
				while (info[i] == "" || (i == 3 && !phonebook.check_nbr(info[i]))){
					std::cout << "Not valid, please write the info valid:\n";
					std::cout << msg[i];
					std::getline(std::cin, info[i]);
					if (info[i] == "EXIT")
					return 0;
				}
			}
			phonebook.info_add (info[0], info[1], info[2], info[3], info[4]);
			std::cout << "The operation has finished !!!\n";
		}
		else if (tem == "EXIT")
			return 0;
		else if (tem == "SEARCH"){
			std::cout << "Index: ";
			std::getline(std::cin, tem);
			if (tem == "EXIT")
					return 0;
			while (tem == "" || !phonebook.check_nbr(tem)){
				std::cout << "Not valid!!!\n";
				std::cout << "Index: ";
				std::getline(std::cin, tem);
				if (tem == "EXIT")
					return 0;
			}
			phonebook.info_serch(tem);
		}
		else
			std::cout << "\t1.ADD to add new infomation about contact.\n\t2.SEARCH to find the information about your contac.\n\t3.EXIT to finish the program." << std::endl;
	}
	return 0;
}