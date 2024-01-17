#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        i++;
    }
    return i;
}

int is_charset(char c, char *charset) 
{
    while (*charset) 
    {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}

int word_count(char *str, char *charset)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] && is_charset(str[i], charset))
            i++;
        if (str[i] && !is_charset(str[i], charset))
            count++;
        while (str[i] && !is_charset(str[i], charset))
            i++;
    }
    return (count);
}

int word_len(char *str, char *charset)
{
    int i = 0;

    while (str[i] && !is_charset(str[i], charset))
        i++;
    return (i);
}

char **ft_split(char *str, char *charset)
{
    char **rendu;
    int i = 0;
    int j = 0;
    int k = 0;

    rendu = (char**)malloc(sizeof(char*) * (word_count(str, charset) + 1));
    while (str[i])
    {
        k = 0;
        while (str[i] && is_charset(str[i], charset))
            i++;
        if (str[i] && !is_charset(str[i], charset))
        {
            rendu[j] = (char*)malloc(sizeof(char) * (word_len(&str[i], charset) + 1));
            while (str[i] && !is_charset(str[i], charset))
                rendu[j][k++] = str[i++];
            rendu[j++][k] = '\0';
        }
    }
    rendu[j] = NULL;
    return (rendu);
}

int main()
{
    char *str = "Viva, La, Libertad, Peepo, Sadge";
    char *charset = ", ";
    char **rendu;
    int i = 0;

    rendu = ft_split(str, charset);
    while(rendu[i])
    {
        write(1, rendu[i], ft_strlen(rendu[i]));
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
