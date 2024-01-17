/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:30:26 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/15 16:47:53 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
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
    char src[] = "frog";
    char dest[50] = "pepethe";
	unsigned int n = 100;

	strncat(dest, src,n);
    printf("%s\n", dest);

	char src2[] = "frog";
	char dest2[50] = "pepethe";

    ft_strncat(dest2,src2,n);
    printf("%s\n", dest2);
   	return 0;
}*/
