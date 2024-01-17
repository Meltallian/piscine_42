/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:30:36 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 15:05:12 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_squrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
	i++;
	}
	return (0);
}
/*
int main() {
    int	nb = -4;
	printf("%d",ft_squrt(nb));
    return 0;
}*/
