#include "libft.h"
char	**ft_split(char const *str, char const *charset);

char	*ft_strdup2(char *src, int *amount)
{
	char	*p;
	char	*temp;

	p = (char *)malloc(sizeof(char) * (*amount + 1));
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

char	**ft_split(char const *str, char const *charset)
{
	int		amount;
	char	**target;
	int		i;
	char	*str2;
	char	*charset2;

	str2 = (char*)str;
	charset2 = (char*)charset;

	i = 0;
	amount = 0;
	target = (char **)malloc(sizeof(char *) * (space_count(str2, charset2) + 1));
	while (*str2)
	{
		if (check_charset(str2, charset2))
		{
			if (amount != 0)
				target[i++] = ft_strdup2((str2 - amount), &amount);
		}
		else
			amount++;
		str2++;
	}
	if (amount != 0)
		target[i++] = ft_strdup2((str2 - amount), &amount);
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