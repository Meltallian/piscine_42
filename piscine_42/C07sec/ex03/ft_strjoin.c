/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:12:35 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/26 16:15:56 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	len;

	k = 0;
	len = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			len++;
			i++;
		}
		i = 0;
		while (sep[i] && k < size - 1)
		{
			len++;
			i++;
		}
		k++;
	}
	return (len);
}

void	copy_and_increment(char *dest, char *src, int *i, int *j)
{
	while (src[*i])
	{
		dest[*j] = src[*i];
		(*i)++;
		(*j)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*conc;

	i = 0;
	j = 0;
	k = 0;
	conc = (char *)malloc((ft_strlen(size, strs, sep) * sizeof(char)) + 1);
	if (size == 0)
		return (malloc(sizeof(char)));
	while (k < size)
	{
		i = 0;
		copy_and_increment(conc, strs[k], &i, &j);
		i = 0;
		if (k < size - 1)
		{
			copy_and_increment(conc, sep, &i, &j);
		}
		k++;
	}
	conc[j] = '\0';
	return (conc);
}
/*
int main()
{
    char    *str[] = {"Hello world", "big lebowsky", "peeposadge"};
    char    *sep = " pog ";
    int size = 3;
    char *result = ft_strjoin(size, str, sep);

    printf("%s",result);
    free(result);
    return (0);
}*/
