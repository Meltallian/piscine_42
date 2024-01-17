/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:05:43 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 15:37:30 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 2)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
	i--;
	}
	return (1);
}
/*
int	main()
{
	int	nb = 499;
	printf("%d", ft_is_prime(nb));
	return 0;
}*/
