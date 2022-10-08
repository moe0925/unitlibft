#include "libft.h" 

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == '\0')
    {
        while (s[i] != '\0')
        {
            i++;
        }
        return(&s[i + 1]);
    }
    
    while(s[i] != '\0')
    {
        if (s[i] == c)
            return (&s[i]);
        else
            i++;
    }
    return (NULL);
}

int main(void)
{
    const char *p = strchr( "abcdef", '\0');
    if ( p == NULL )
    {
        puts( "見つからない。" );
    }
    else
    {
        puts( p );
    }

    printf("-----------------\n");
    const char *s = ft_strchr( "abcdef", '\0' );

    if ( s == NULL )
    {
        puts( "見つからない。" );
    }
    else
    {
        puts(s);
    }

}