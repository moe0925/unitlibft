#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char *strndup(const char *s1, size_t n);
// char	*ft_strdup(const char *src,  *amount)
{
	char	*p;
	char	*temp;

	p = (char *)malloc(sizeof(char) * (n + 1));
	temp = p;
	if (!p)
		return (0);
	else
	{
		while (*amount)
		{
			*p = *src;
			p++;
			src++;
			*amount -= 1;
		}
	}
	*p = '\0';
	return (temp);
}

int	check_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == *str)
			return (1);
		i++;
	}
	return (0);
}

int	space_count(char *str, char *charset)
{
	int	count;
	int	amount;

	count = 0;
	while (*str)
	{
		if (check_charset(str, charset))
		{
			if (amount != 0)
				count++;
			amount = 0;
		}
		else
			amount++;
		str++;
	}
	if (amount != 0)
		return (count + 1);
	else
		return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		amount;
	char	**target;
	int		i;

	i = 0;
	amount = 0;
	target = (char **)malloc(sizeof(char *) * (space_count(str, charset) + 1));
	while (*str)
	{
		if (check_charset(str, charset))
		{
			if (amount != 0)
				target[i++] = ft_strdup((str - amount), &amount);
		}
		else
			amount++;
		str++;
	}
	if (amount != 0)
		target[i++] = ft_strdup((str - amount), &amount);
	target[i] = 0;
	return (target);
}

// int main()
// {
// 	char **ans;
// 	ans = ft_split("a@b@c", "@");
// 	int i = 0;
// 	while (ans[i] != 0)
// 	{
// 		printf("%s\n", ans[i]);
// 		i++;
// 	}
// 	return (0);
// }