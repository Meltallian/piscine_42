/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:24:47 by jbidaux           #+#    #+#             */
/*   Updated: 2023/06/15 16:40:35 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i] && i < n)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char s1[] = "pepethefrog";
	char s2[] = "pepythefrog";
	unsigned int n = 10;

	printf("%d\n",ft_strncmp(s1,s2,n));
	printf("%d\n",strncmp(s1,s2,n));
	return 0;
}*/
