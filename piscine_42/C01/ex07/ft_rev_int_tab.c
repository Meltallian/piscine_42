/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:42:57 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/12 14:07:15 by jbidaux          ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end++;
	}
}

/*int	main()
{
	int	table[] = {1, 2, 3, 4, 5, 6};
	int size = 6;

	printf("Avant %d\n", table[1]);
	ft_rev_int_tab(table, size);
	printf("Apres %d\n", table[1]);

	return 0;
}*/
