#include  "libft.h"
int	ft_strlen(char *str)
char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *s2;
	char *p;
	s2 = (char *)s1;
	p = (char*)malloc(sizeof(char) * ft_strlen(s2));
	// str = (unsigned char *)b ;
	if (!(p))
		return (NULL);

	i = 0;
	while (!s2)
	{
		if (s2[i] == )
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

#include < publib.h >

int main(void) {
        文字行[512];

        while (fgets(line, sizeof(line), stdio) != NULL) {
                strtrim(行);
                printf("%s", 行);
        }
        0 を返します。
}
 
