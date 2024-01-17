/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:50:46 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 14:24:18 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	else
		return ((ft_fibonacci(index - 1) + (ft_fibonacci(index - 2))));
}
/*
int main()
{
	int index = 2;
	printf("%d", ft_fibonacci(index));
	return (0);
}*/
