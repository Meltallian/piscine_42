/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:16:55 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/10 16:45:46 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_linechar(char start, char mid, char end, int length)
{
	int	incr;

	incr = 1;
	while (incr <= length)
	{
		if (incr == 1)
		{
			ft_putchar(start);
		}
		else if (incr < length)
		{
			ft_putchar(mid);
		}
		else
		{
			ft_putchar(end);
		}
	incr++;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	incre;

	incre = 1;
	while (incre <= b)
	{
		if (incre == 1)
		{
			ft_linechar('o', '-', 'o', a);
		}
		else if (incre < b)
		{
			ft_linechar('|', ' ', '|', a);
		}
		else if (incre == b)
		{
			ft_linechar('o', '-', 'o', a);
		}
	incre++;
	}
}	
