#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	i = 0;

	while(i < n)
	{
	if (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	else if (str1[i] != str2[i] && str1[i] != '\0' && str2[i] != '\0')
		return (str1[i] - str2[i]);
	else if (str1[i] == '\0' || str2[i] == '\0')
		return (str1[i] - str2[i]);
	}
	return (0);
}

// int main(void)
// {
// 	char buf[] = "001270";
// 	char buf2[] = "00420";

// 	if(memcmp(buf,buf2,4)==0){
// 		printf("%d",memcmp(buf,buf2,4));
// 		puts("先頭から3バイトは一致しています。");
// 	}else{
// 		puts("一致していません。\n");
// 		printf("%d\n",memcmp(buf,buf2,4));

// 	}

// 	printf("-------------------\n");

// 	if(ft_memcmp(buf,buf2,4)==0){
// 		printf("%d",ft_memcmp(buf,buf2,4));
// 		puts("先頭から3バイトは一致しています。");
// 	}else{
// 		puts("一致していません。");
// 		printf("%d",ft_memcmp(buf,buf2,4));

// 	}

// 	return 0;
// }