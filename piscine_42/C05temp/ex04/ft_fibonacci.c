/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:50:46 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/20 12:35:10 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index > 0)
		return ((index - 1) + (ft_fibonacci(index - 2)));
}

int main()
{
	int index = 8;
	printf("%d", ft_fibonacci(index));
	return (0);
}
