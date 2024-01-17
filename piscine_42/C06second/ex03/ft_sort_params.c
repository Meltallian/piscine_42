/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:04:46 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/21 16:05:19 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < ac)
	{
		while (i < ac - i)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
				ft_swap(&av[i], &av[i + 1]);
		i++;
		}
	j++;
	}
	i = 0;
	j = 1;
	while (j < ac)
	{			
		while (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		i = 0;
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
