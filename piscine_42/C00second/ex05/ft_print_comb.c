/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:33:49 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/11 11:46:02 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				ft_putchar(a, b, c);
				if (a < 55)
				{
					write(1, ", ", 1);
				}
				c++;
			}
		b++;
		}
	a++;
	}	
}

// used to show whether it works
int	main(void)
{
	ft_print_comb();
	return (0);
}
