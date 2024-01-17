/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:54:18 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/14 09:59:11 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 91 && str[i] > 64)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main()
{
	char a[] = "SDF";
	ft_strlowcase(a);
	printf("%s\n", a);
	return (0);
}*/
