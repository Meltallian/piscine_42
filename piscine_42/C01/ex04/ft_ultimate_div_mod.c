/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:14:46 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/12 17:12:38 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a / *b;
	temp2 = *a % *b;
	*a = temp;
	*b = temp2;
}

/*int	main()
{
	int a;
	int b;

	a = 10;
	b = 5;

	printf("Avant, a = %d et b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Apres, a = %d et b = %d\n", a, b);
	
	return(0);
}*/
