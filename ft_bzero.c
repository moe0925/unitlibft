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
	printf("%s",&str[0]);
	printf("%s",&str[1]);
	printf("%s",&str[2]);
	printf("%s",&str[3]);
	printf("%s",&str[4]);
	printf("%s",&str[5]);
	printf("%s",&str[6]);
	return;
}

int main ()
{
	unsigned int len;

	char c1[] = "abcde";
	len = 1;
    ft_bzero(c1,len);
	bzero(c1,len);

}