#include "libft.h" 
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*p;

	if (src == NULL)
		return (NULL);
	p = malloc(ft_strlen(src) + 1);
	if (p)
	{
		ft_strcpy (p, src);
	}
	return (p);
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