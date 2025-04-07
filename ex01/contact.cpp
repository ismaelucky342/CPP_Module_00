/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2025/04/07 12:40:02 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.hpp"

void show_menu() {
	std::cout << YELLOW "WELCOME TO PHONEBOOK!!\n" RESET;
	std::cout << YELLOW "\nChoose an option:\n" RESET;
	std::cout << YELLOW "\t1. ADD    - Add a new contact\n" RESET;
	std::cout << YELLOW "\t2. SEARCH - Search for a contact\n" RESET;
	std::cout << YELLOW "\t3. EXIT   - Exit the program\n\n" RESET;
}

bool not_space(int ch) {
	return !std::isspace(ch);
}

std::string clean_input(const std::string& input) {
	std::string res = input;

	std::string::iterator it = std::find_if(res.begin(), res.end(), not_space);
	res.erase(res.begin(), it);

	std::string::reverse_iterator rit = std::find_if(res.rbegin(), res.rend(), not_space);
	res.erase(rit.base(), res.end());

	return res;
}

bool handle_add(Book &phonebook, const std::string msg[5]) {
	std::string info[5];
	for (int i = 0; i < 5; i++) {
		std::cout << msg[i];
		std::getline(std::cin, info[i]);
		if (info[i] == "EXIT") return false;
		while (info[i].empty() || (i == 3 && !phonebook.check_nbr(info[i]))) {
			std::cout << "Not valid, please write the info valid:\n";
			std::cout << msg[i];
			std::getline(std::cin, info[i]);
			if (info[i] == "EXIT") return false;
		}
	}
	phonebook.info_add(info[0], info[1], info[2], info[3], info[4]);
	std::cout << "✅ The contact has been added successfully!\n";
	return true;
}

bool handle_search(Book &phonebook) {
	std::string tem;
	phonebook.print_agenda();
	std::cout << GREEN "➡️ Insert Index: " RESET;
	std::getline(std::cin, tem);
	if (tem == "EXIT") return false;

	while (tem.empty() || !phonebook.check_nbr(tem)) {
		std::cout << RED "ERROR: Not valid!!!\n" RESET;
		std::cout << GREEN "➡️ Insert Index: " RESET;
		std::getline(std::cin, tem);
		if (tem == "EXIT") return false;
	}
	phonebook.info_serch(tem);
	return true;
}

int main() {
	std::string msg[5] = {FNAME, LNAME, NNAME, PNBR, SEC};
	Book phonebook;

	using_history();

	while (true) 
	{
		show_menu();
		char *input = readline("\001\033[1;34m\002Phonebook >> \001\033[0m\002");
		if (!input) break;

		std::string tem = clean_input(input);
		if (!tem.empty()) add_history(input);
		free(input);

		if (tem == "ADD") {
			if (!handle_add(phonebook, msg))
				break;
		} else if (tem == "SEARCH") {
			if (!handle_search(phonebook))
				break;
		} else if (tem == "EXIT") {
			std::cout << "👋 Exiting the program. Goodbye!\n";
			break;
		} else {
			std::cout << RED "❌ Invalid option. Please try again.\n" RESET;
		}
	}
	return 0;
}