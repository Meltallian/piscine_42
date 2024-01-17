/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:33:49 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/08 09:50:12 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include unistd.h

void ft_putchar(int c)
{
	write(1, &c, 3);
}

void ft_print_comb(void)
{
	int	i
	i	=	000;

	while (i < 790)
	{
		ft_putchar(i);
		i++;
	}

int main()
{
	ft_print_comb();
	return(0);
}
