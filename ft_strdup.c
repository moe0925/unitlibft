#include "libft.h" 
char	*ft_strcpy(char *dest, char *src);
size_t	t_strlen(const char *s);

char	*ft_strdup(const char *src)
{
	const char	*p;

	if (src == NULL)
		return (NULL);
	p = malloc(ft_strlen(src) + 1);
	if (p)
	{
		ft_strcpy (p, src);
	}
	return (p);
}



char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char str1[] = "abcde"; 
// 	printf("%s\n",ft_strdup(str1));
// 	return (0);
// }