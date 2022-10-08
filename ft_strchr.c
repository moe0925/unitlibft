#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
            return (s[i]);
        else
            i++;
    }
    return (NULL);
}

int main()
{
    char *str;
    char c1;

    str = "123456"; 
    c1 = '3';
    
    printf("%s",ft_strchr(str,c1));
    return 0;
}