#include <unistd.h>

void    ft_alphabet(char *str1, char *str2)
{
    char alpha[257] = {0};
    int i = 0;
    while(str1[i])
    {
        if(alpha[str1[i]] == 0)
        {
            alpha[str1[i]] = 1;
        }
        i++;
    }
    i = 0;
    while (str2[i])
    {
        if(alpha[str2[i]] == 1)
        {
            alpha[str2[i]] = 2;
        }
        i++;
    }
    i = 0;
    while (str1[i])
    {
        if (alpha[str1[i]] == 2)
        {
            write(1,&str1[i],1);
            alpha[str1[i]] = 3;
        }
    i++;
    }
}

int main(int ac, char **av)
{
    if (!(ac == 3))
    {
        write(1,"\n",1);
        return (0);
    }
    else
    {
        ft_alphabet(av[1],av[2]);
        write (1, "\n", 1);
    }
    return (0);
}