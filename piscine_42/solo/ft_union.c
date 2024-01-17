#include <unistd.h>
#include <stdlib.h>

int ft_checkdub(char *str, char c, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

/* int ft_strlen(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        i++;
        j++;
    }
    i++;
    return (i);
} */

char    *ft_strjoin(char *str1, char *str2, char *dest)
{
    int i;
    int j;
 /*    char *dest = malloc(len * sizeof(char)); */
 /*    char dest[100000000]; */
    i = 0;
    j = 0;
    while (str1[i] != '\0')
    {
        dest[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0')
    {
        dest[i] = str2[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    char dest[100000];
    if (!(ac == 3))
    {
        write(1, "Error\n", 6);
        return (1);
    }
/*     int len = ft_strlen(av[1], av[2]); */
    char *str = ft_strjoin(av[1], av[2], dest);
    if (str == NULL)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    while (str[i] != '\0')
    {
        if (ft_checkdub(str, str[i], i) == 0)
        {
            ft_putchar(str[i]);
        }
        i++;
    }
    write(1, "\n", 1);
 //   free(str);
    return (0);
}