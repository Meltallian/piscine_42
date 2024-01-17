/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:30:36 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/14 09:58:36 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 123 && str[i] > 96)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main()
{
	char a[] = "sdf";
	ft_strupcase(a);
	printf("%s\n", a);
	return (0);
}*/
