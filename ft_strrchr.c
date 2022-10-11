#include "libft.h" 

char *ft_strrchr(const char *s, int c)
{
    int i;

    char *s2;

	s2 = (char *)s;
    if (c == '\0')
    {
        while (s2[i] != '\0')
        {
            i++;
        }
        return(&s2[i + 1]);
    }
    
	i = ft_strlen(s2);
    while(i > 0)
    {
        if (s2[i] == c)
            return (&s2[i]);
        else
            i--;
    }
    return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
    const char *p = strrchr( "abcdef", 'd');
    if ( p == NULL )
    {
        puts( "見つからない。" );
    }
    else
    {
        puts( p );
    }

    printf("-----------------\n");
    const char *s = ft_strrchr( "abcdef", 'd' );

    if ( s == NULL )
    {
        puts( "見つからない。" );
    }
    else
    {
        puts(s);
    }

}