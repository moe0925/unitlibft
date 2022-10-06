#include "libft.h"

void *ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char *str;
	char *src;
	str = (char *)buf1;
	src = (char *)buf2;
	int	i;

	i = 0;
	while (i < n)
	{	
		str[i] = src[i];
		i++;
	}
	return (str);
}

int main ()
{
	unsigned int len;

	char c1[] = "abcde";
	char c2[] = "ABCDE";
	len = 6;
    ft_memmove(c1,c2,len);
	printf("%s",(char*)ft_memmove(c1,c2,len));
}
