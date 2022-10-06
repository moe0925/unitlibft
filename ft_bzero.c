#include "libft.h"
void ft_bzero(void *s, size_t n)
{
	char *str;
	str = (char *)s ;

	int	i;

	i = 0;
	while (i < n)
	{	
		str[i] = '\0';
		i++;
	}
	 

	return ;
}

int main ()
{
	unsigned int len;

	char c1[] = "abcde";
	len = 3;
    bzero(c1,len);
}
