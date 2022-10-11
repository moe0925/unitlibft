#include "libft.h"

int ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		minus;

	num = 0;
	i = 0;
	minus = 1;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	while ((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
			minus = minus * -1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		num = num + str[i] - 48;
		num = num * 10;
		i++;
	}
	num = num / 10;
	return (num * minus);
}


#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *s;
    s = "  -++-98kk85";  
	printf("%d\n",ft_atoi(s));
}