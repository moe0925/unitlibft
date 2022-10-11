#include <stdlib.h>
int	malloc_len(char **strs, int size, char *sep);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char) * (malloc_len(strs, size, sep) + 1));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * (malloc_len(strs, size, sep) + 1));
	if (!(str))
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int	malloc_len(char **strs, int size, char *sep)
{
	int	len_ans1;
	int	i;

	len_ans1 = 0;
	i = 0;
	while (i < size)
	{
		len_ans1 = len_ans1 + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		len_ans1 = len_ans1 + ft_strlen(sep);
		i++;
	}
	return (len_ans1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**strs1;
// 	char	*sep1;
// 	int size1;
// 	strs1[0]= "tokyo";
// 	strs1[1]= "kyoto";
// 	strs1[2]= "okinawa";
// 	strs1[3]= "osaka";
// 	sep1= ",";
// 	size1 = 4;
// 	printf("%s", ft_strjoin(size1,&strs1[0],sep1));
// 	return (0);
// }