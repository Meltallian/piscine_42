/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:48:37 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/21 14:59:51 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (j > 0)
	{
		while (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		i = 0;
		write (1, "\n", 1);
		j--;
	}
	return (0);
}
