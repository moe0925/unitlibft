#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *str;
	char *src2;
	str = (char *)dst;
	src2 = (char *)src;
	int	i;

	i = 0;
	while (i < len)
	{	
		str[i] = src2[i];
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
