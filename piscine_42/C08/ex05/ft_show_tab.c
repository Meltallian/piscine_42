/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:52:54 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/28 14:54:19 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

//struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	putnbr(int size)
{
	char	num;

	if (size == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (size < 0)
	{
		write (1, "-", 1);
		size *= -1;
	}
	if (size >= 10)
	{
		putnbr(size / 10);
		size = size % 10;
	}
	if (size < 10)
	{
		num = size + '0';
		write (1, &num, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != NULL)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write (1, &par[i].str[j], 1);
			j++;
		}
		j = 0;
		write (1, "\n", 1);
		putnbr(par[i].size);
		write (1, "\n", 1);
		while (par[i].copy[j] != '\0')
		{
			write (1, &par[i].copy[j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
