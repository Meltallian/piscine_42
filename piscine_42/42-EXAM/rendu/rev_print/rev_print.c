#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{
    int i = 0;
   
    if(!(ac == 2))
    {
        write(1,"\n",1);
    }
    else
    {
        int index = ft_strlen(av[1]);
        while(av[1][i])
        {
            write(1, &av[1][index -1],1);
            index--;
            i++;
        }
        write(1,"\n",1);
    }
    return (0);
}