#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *str;
	char *src2;
	int str_num;
	str = (char *)dst;
	str_num = (int )dst;
	src2 = (char *)src;
	int	i;

	if (src <= dst /* && src + len <= dst +len */)
	{
		i = len - 1;
		while (i >= 0)
		{	
			str[i] = src2[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{	
			str[i] = src2[i];
			i++;
		}
	}
	return (str);
}

// int main ()
// {
// 	unsigned int len;

// 	char c1[] = "abcde";
// 	char c2[] = "ABCDE";
// 	len = 3;
//     ft_memmove(c1,c2,len);
// 	printf("%s",(char*)ft_memmove(c1,c2,len));
// }

int main(void)
{
        char str[] = "0123456789";
        
        printf("移動前：%s\n",str);
        
        memmove(str+3, str, 5);        /* 重複エリアのコピー */

        printf("移動後：%s\n",str);

		printf("-------------------------------\n");

		char str2[] = "0123456789";

		printf("移動前：%s\n",str2);
        
        ft_memmove(str2+3, str2, 5);        /* 重複エリアのコピー */

		

        printf("移動後：%s\n",str2);
        return 0;
}