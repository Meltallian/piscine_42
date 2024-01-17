/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:47:33 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 11:50:07 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		return (nb * (ft_recursive_factorial (nb - 1)));
	}
}
/*
int main()
{
    int nb = 7;
    int val = ft_recursive_factorial(nb);
    printf("%d", val);
    return 0;
}*/
