/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:33:45 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/28 12:53:18 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_strcpy(dest, s);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	tab[i].size = 0;
	return (tab);
}
/*
int main()
{
	char *str[] = {"Hello", "peepo", "sadge"};
	int	size = 3;
	int	i = 0;
	t_stock_str *tab;
 
	tab = ft_strs_to_tab(size, str);
	while(i < size)
	{
		printf("%d\n", tab[i].size);
		printf("%s\n", tab[i].str);
		printf("%s\n", tab[i].copy);
		i++;
	}
	return (0);
}*/
