/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2025/04/07 12:13:37 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

char    ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    else if (c >= 'A' && c <= 'Z')
        return c;
    else
    {
        std::cerr << "\033[31m""⚠️ Unsupported character: " << c << std::endl;
        exit(EXIT_FAILURE);
    }
}

int	main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * ";
    else
        for (int i = 1; i < argc; i++)
        	for (int j = 0; argv[i][j] != '\0'; j++)
                std::cout << ft_toupper(argv[i][j]);
    std::cout << std::endl;
}
