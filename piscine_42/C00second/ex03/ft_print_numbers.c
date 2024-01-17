/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:29:32 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/11 08:54:07 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i < 58)
	{
		ft_putchar(i);
		i++;
	}
}

//Used to show whether it works
/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
