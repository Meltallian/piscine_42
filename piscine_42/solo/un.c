#include <unistd.h>

void	ft_union(char *str1, char *str2)
{	
	int alphabet[127] = {0};
	int	i = 0;
	
	while (str1[i])
	{
		if (alphabet[(int)str1[i]] == 0)
		{
			alphabet[(int)str1[i]] = 1;
			write(1, &str1[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i])
    {
        if (alphabet[(int)str2[i]] == 0)
        {
            alphabet[(int)str2[i]] = 1;
            write(1, &str2[i], 1);
        }
		i++;
    }
	write(1, "\n", 1);
}


int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(argv[1], argv[2]);
}