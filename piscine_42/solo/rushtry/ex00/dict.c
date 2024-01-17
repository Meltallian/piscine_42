/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maamorim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:36:46 by maamorim          #+#    #+#             */
/*   Updated: 2023/06/24 20:35:40 by maamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void	dico(int nb)
{

}

void	write_nb(int nb)
{

	if (nb >= 0 && nb <= 9)
	{
		

	}
	else
		write(1, "null", 4);
}
*/

int	main(void)
{
	int	fichier;
	char	buffer[256];
	ssize_t	tailleLue;

	fichier = open("numbers.dict", O_RDONLY);
	if (fichier == -1)
		write(1, "Error", 5);

	while ((tailleLue = read(fichier, buffer, sizeof(buffer))) > 0)
		write(STDOUT_FILENO, buffer, tailleLue);

	close(fichier);
}
