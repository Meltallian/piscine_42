/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:03:18 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/26 15:23:16 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	arrlength(int min, int max)
{
	int	len;

	len = -(min - max);
	if (len == 0)
		return (0);
	return (len);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(arrlength(min, max) * sizeof(int));
	if (array == 0)
		return (0);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
int	main()
{
	int	min = 0;
	int	max = 0;
	int	i = 0;
	int *array = ft_range(min, max);
	while (i < arrlength(min, max))
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
