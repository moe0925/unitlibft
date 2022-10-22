#include "libft.h"

void *ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char *str;
	unsigned char *src;
	str = (unsigned char *)buf1;
	src = (unsigned char *)buf2;
	size_t	i;
	if (n == 0)
		return(str);
	
	if (src[0] == '\0')
	{
		i = n - 1;
		while (i >= 1)
		{	
			str[i] = str[i - 1];
			--i;
		}
		str[0] = 0;
		return(str);
	}

	i = 0;
	while (i < n)
	{	
		
		str[i] = src[i];
		i++;
	}
	return (str);
}

// int main ()
// {
// 	unsigned int len;

// 	char c1[] = "123";
// 	char cc1[] = "123";
// 	char c2[] = "";
// 	char cc2[] = "";
// 	len = 3;
// 	int i;
//     char *str = memcpy(c1,c2,len);
// 	i = 0;
// 	while (i < 3)
// 	{
// 	 	printf("%d\n",str[i]);
// 		i++;
// 	}
// 	printf("ーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーー\n");

// 	i = 0;
// 	char *str2 = ft_memcpy(cc1,cc2,len);
// 	while (i < 3)
// 	{
// 		printf("%d\n",str2[i]);
// 		i++;
// 	}
// 	printf("ーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーー\n");

// 	memcpy(c1,c2,len);
// 	printf("%s\n",(char*)ft_memcpy(c1,c2,len));
// 	printf("%s\n",(char*)memcpy(cc1,cc2,len));
	
// }


// #include "libft.h"
// void	*ft_memset(void *b, int c, size_t len )
// {
// 	char *str;
// 	char c2;
// 	str = (char *)b ;
// 	c2 = (char)c;

// 	int	i;

// 	i = 0;
// 	while (i < len)
// 	{	
// 		str[i] = c2;
// 		i++;
// 	}
// 	return (str);
// }

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{	
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }
