#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < (dstsize - 1))
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char a[]= "123";
// 	char b[]= "abcde";
// 	ft_strlcpy(a,b,3);
// 	printf("%c",a[0]);
//     printf("%c",a[1]);
//     printf("%c",a[2]);
// }
 