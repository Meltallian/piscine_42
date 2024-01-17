/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:12:45 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/11 10:11:04 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 5;
	
	ft_div_mod(a, b, &div, &mod);
	printf("Division puis modulo : a = %d, b = %d\n", div, mod);

	return (0);
}*/
