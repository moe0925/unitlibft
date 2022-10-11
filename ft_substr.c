#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int i;
	char *s2;
	char *p;
	p = (char*)malloc(sizeof(char) * len);
	// str = (unsigned char *)b ;
	if (!(p))
		return (NULL);

	s2 = (char *)s;
	i = 0;
	while (s2[start + i] != '\0')
	{
		p[i] = s2[start + i];
		i++;
	}
	return (p);
}


int main()
{
	char *str = "HELLO AGAIN";
	int start1 = 6;
	int len1 = 5;
	ft_substr(str,start1,len1);
	printf("%s",ft_substr(str,start1,len1));
	return 0;
}