/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srclcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:41:01 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/15 16:53:49 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] != '\0' && i < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (i + j + 2);
}

/*int main()
{
    char src[] = "frog";
    char dest[50] = "pepethe";
	unsigned int n = 100;

    printf("%lu\n", strlcat(dest, src,n));

	char src2[] = "frog";
	char dest2[50] = "pepethe";

   
    printf("%d\n", ft_strlcat(dest2,src2, n));
   	return 0;
}*/
