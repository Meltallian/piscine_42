#include <unistd.h>

void ft_alphabet(char *str1, char *str2)
{
    int i = 0;
    int alphabet[256] = {0};
    while (str1[i])
    {
        if(alphabet[(int)str1[i]] == 0)
        {
            alphabet[(int)str1[i]] = 1;
        }
        i++;
    }
    i = 0;
    while (str2[i])
    {
        if(alphabet[(int)str2[i]] == 1)
        {
            alphabet[(int)str2[i]] = 2;
 //           write (1, &str1[i], 1);
        }

        i++;
    }
    i = 0;
    while (str1[i])
    {
        if (alphabet[str1[i]] == 2)
        {
            write(1, &str1[i], 1);
            alphabet[str1[i]] = 0;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_alphabet(av[1], av[2]);
    }
    else
    {
        write (1, "Error\n", 6);
    }
    return (0);
}