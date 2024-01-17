/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:22:55 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 09:28:31 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*
int	main()
{
	int	nb = 9;
	int val = ft_iterative_factorial(nb);
	printf("%d", val);
	return 0;
}*/
