#include "libft.h" 

char *ft_strrchr(const char *s, int c)
{
    int i;

    
    if (c == '\0')
    {
        while (s[i] != '\0')
        {
            i++;
        }
        return(&s[i + 1]);
    }
    
	i = ft_strlen(s);
    while(i > 0)
    {
        if (s[i] == c)
            return (&s[i]);
        else
            i--;
    }
    return (NULL);
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