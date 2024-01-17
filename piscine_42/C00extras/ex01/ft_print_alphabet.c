/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:31:44 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/07 21:02:32 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char i;

	i = 97;
	while (i < 123)
		{
			ft_putchar(i);
			i++;
		}
}

//Used to show whether it works
int main()
{
ft_print_alphabet();
return (0);
}
