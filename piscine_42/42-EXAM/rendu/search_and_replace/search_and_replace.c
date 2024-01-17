#include <unistd.h>
#include <stdlib.h>
int ft_charcheck(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if(!(str[i] == c))
            return (1);
        i++;
    }
    return (0);
}

char    *ft_replace(char *str, char *l1, char *l2)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == l1[0])
        {
            str[i] = l2[0];
        }
        i++;
    }
    return (str);
}

int ft_strlen(char  *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

int main (int ac, char **av)
{
    int i = 0;
    if(!(ac == 4) || !(ft_strlen(av[2]) == 1) || !(ft_strlen(av[3]) == 1))
    {
        write(1, "\n", 1);
        exit(1); 
    }
    if (!(ft_charcheck(av[1], av[2][0])))
    {
        while(av[1][i])
        {
            write (1, &av[1][i], 1);
            i++;
        }
        write (1, "\n", 1);
        exit(0);
    }
    else 
    {
        ft_replace(av[1],av[2],av[3]);
        while (av[1][i])
        {
            write(1,&av[1][i],1);
            i++;
        }
        write(1, "\n",1);
    }
    exit(0);
}