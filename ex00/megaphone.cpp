/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2025/02/15 19:45:05 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
}

int	main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < argc; i++)
        	for (int j = 0; argv[i][j] != '\0'; j++)
                std::cout << ft_toupper(argv[i][j]);
    std::cout << std::endl;
}
