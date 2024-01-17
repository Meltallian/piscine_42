/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:24:03 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/26 15:21:46 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		j;
	char	*cpy;

	cpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	j = 0;
	if (cpy == NULL)
		return (0);
	while (src[j] != '\0')
	{
		cpy[j] = src[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
/*
int main()
{
	char src[] = "sdfsdf46546sdf6sdf4";
	char *dup = ft_strdup(src);
	printf("%s", dup);
	free(dup);
	return 0;
}*/
