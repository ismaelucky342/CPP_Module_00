/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/11 18:21:24 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.hpp"

int main()
{
	std::string info[5];
	std::string msg[5] = {FNAME, LNAME, NNAME, PNBR, SEC};
	std::string tem;
	Book phonebook;

	while (1)
	{
		std::cout << "Waiting for instruction ...\n";
		std::getline(std::cin, tem);

		if (tem == "ADD")
		{
			for (int i = 0; i < 5; i++)
			{
				std::cout << msg[i];
				std::getline(std::cin, info[i]);

				if (info[i] == "EXIT")
					return 0;

				while (info[i] == "" || (i == 3 && !phonebook.check_nbr(info[i])))
				{
					std::cout << "Not valid, please write the info valid:\n";
					std::cout << msg[i];
					std::getline(std::cin, info[i]);
					if (info[i] == "EXIT")
						return 0;
				}
			}
			phonebook.info_add(info[0], info[1], info[2], info[3], info[4]);
			std::cout << "The operation has finished !!!\n";
		}
		else if (tem == "EXIT")
		{
			return 0;
		}
		else if (tem == "SEARCH")
		{
			phonebook.print_agenda(); 
			std::cout << GREEN "➡️ Insert Index: " RESET;
			std::getline(std::cin, tem);

			if (tem == "EXIT")
				return 0;

			while (tem == "" || !phonebook.check_nbr(tem))
			{
				std::cout << RED "ERROR: Not valid!!!\n" RESET;
				std::cout << GREEN "➡️ Insert Index: " RESET;
				std::getline(std::cin, tem);
				if (tem == "EXIT")
					return 0;
			}
			phonebook.info_serch(tem);
		}
		else
			std::cout << "\t1.ADD to add new information about contact.\n\t2.SEARCH to find the information about your contact.\n\t3.EXIT to finish the program." << std::endl;
	}
	return 0;
}
