/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:59:29 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/11 09:30:33 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		write(1, "", 1);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_putchar(a, b, c, d);
					d++;
				}
			c++;
			d = '0';
			}
		b++;
		c = '0';
		}
	a++;
	b = '0';
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
