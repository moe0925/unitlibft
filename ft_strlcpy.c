unsigned int	ft_strlcpy(char * dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size - 1))
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int main()
{
	char a[]= "123";
	char b[]= "abcde";
	ft_strlcpy(a,b,3);
	printf("%c",a[0]);
    printf("%c",a[1]);
    printf("%c",a[2]);
}
  */