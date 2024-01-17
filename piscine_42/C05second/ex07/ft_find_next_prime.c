/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:38:10 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/21 12:11:38 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 2)
		return (0);
	if (i > 46340)
		i = 46340;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
	i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
			nb++;
	return (nb);
}

int	main()
{
	int	nb = -2147483648;
	printf("%d",ft_find_next_prime(nb));
	return 0;
}
