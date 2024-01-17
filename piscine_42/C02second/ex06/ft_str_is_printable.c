/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:27:15 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/14 09:56:29 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main()
{
	char a[] = "12234";
	printf("%d\n", ft_str_is_printbable(a));
	return (0);
}*/
