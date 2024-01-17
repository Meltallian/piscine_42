/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:39:59 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/15 19:04:30 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
	char src[] = "pepethe";
	char dest[45] = "frog";

//	strcat(dest,src);
	printf("%s\n", dest);

	char src2[] = "pepethe";
	char dest2[45] = "frog";

	ft_strcat(dest2,src2);
	printf("%s\n", dest2);
	return 0;
}*/
