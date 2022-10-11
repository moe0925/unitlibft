#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *str1;
	unsigned char *str2;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	if (str1[n - 1] == str2[n - 1])
		return (0);
	else
		return (str1[n - 1] - str2[n - 1]);
}

int main(void)
{
	char buf[] = "ABCD5EFGH";
	char buf2[] = "ABD";

	if(memcmp(buf,buf2,3)==0){
		printf("%d",memcmp(buf,buf2,3));
		puts("先頭から3バイトは一致しています。");
	}else{
		puts("一致していません。\n");
		printf("%d\n",memcmp(buf,buf2,3));

	}

	printf("-------------------\n");

	if(ft_memcmp(buf,buf2,3)==0){
		printf("%d",ft_memcmp(buf,buf2,3));
		puts("先頭から3バイトは一致しています。");
	}else{
		puts("一致していません。");
		printf("%d",ft_memcmp(buf,buf2,3));

	}

	return 0;
}