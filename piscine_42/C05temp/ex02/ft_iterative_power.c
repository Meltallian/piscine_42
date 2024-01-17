/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 09:30:08 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 11:22:31 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
		i = i * nb;
		power --;
}
return (i);
}

/*
int main()
{
    int nb = 10;
	int power = 4;
    int val = ft_iterative_power(nb, power);
    printf("%d", val);
    return 0;
}*/
