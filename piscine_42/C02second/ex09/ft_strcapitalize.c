/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:28:45 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/14 11:45:20 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] < 123 && str[0] > 96)
	str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] >= 0 && str[i - 1] < 48)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 122)
				str[i] = str[i] - 32;
		}
		if (str[i] > 64 && str[i] < 91)
			if (str[i - 1] > 96 && str[i - 1] < 123)
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char text[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(text);
	printf("%s\n", text);
	return (0);
}*/
