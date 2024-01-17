/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:04:46 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/15 16:40:11 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char s1[] = "pepethefrog";
	char s2[] = "papythefrog";

	printf("%d\n",ft_strcmp(s1,s2));
	printf("%d\n",strcmp(s1,s2));
	return 0;
}*/
