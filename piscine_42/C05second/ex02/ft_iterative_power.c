/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 09:30:08 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/21 10:32:21 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		i = i * nb;
		power --;
	}
	return (i);
}
/*
int main()
{
    int nb = 5;
	int power = -55;
    int val = ft_iterative_power(nb, power);
    printf("%d", val);
    return 0;
}*/
