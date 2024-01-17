/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:39:45 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/09 13:27:44 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main()
{
	int	num1;
	int	num2;

	num1 = 5;
	num2 = 10;

	printf("Before : num1 = %d, num2 = %d\n", num1, num2);

	ft_swap(&num1, &num2);

	printf("After: num1 = %d, num2 = %d\n", num1, num2);

	return (0);
}*/
