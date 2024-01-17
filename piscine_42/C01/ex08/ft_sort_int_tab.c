/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:40:57 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/12 17:28:57 by jbidaux          ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
		j++;
		}
	j = 0;
	i++;
	}
}

/*int main()
{
	int table[] = {1, 3, 6, 4, 7, 2};
	int size = 6;

	for(int i = 0; i < size; i++)
	{
		printf("%d, ", table[i]);
	}
	ft_sort_int_tab(table, size);
	printf("\n");

	for(int i = 0; i < size; i++)
	{
		printf("%d, ", table[i]);
	}
	return 0;
}*/
