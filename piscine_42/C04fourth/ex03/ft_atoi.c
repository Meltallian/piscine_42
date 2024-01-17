/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:58:43 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 12:03:57 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	res;
	int	sign;

	i = 0;
	j = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 11
		|| str[i] == 12 || str[i] == 13)
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 == 1)
		sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (sign * res);
}

int	main(void)
{
	char	*str;
	int		val;

	str = "	 	-+-+-----5465g6";
	val = ft_atoi(str);
	printf("%d\n", val);
	return (0);
}
