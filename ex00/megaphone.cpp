/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:57:52 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/09 17:09:26 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
}

int	main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j] != '\0'; j++)
                std::cout << ft_toupper(av[i][j]);
        }
    std::cout << std::endl;
}
