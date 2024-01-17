/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:14:53 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 11:31:42 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		return (nb * (ft_recursive_power (nb, --power)));
	}
}
/*
int	main()
{
	int nb = 4;
	int power = -5;
	int val = ft_recursive_power(nb, power);
	printf("%d", val);
	return 0;
}*/
