#ifndef LIBFT_H
#define LIBFT_H
//------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//------------------------------------------------
//  マクロ定義(Macro definition)
//------------------------------------------------
#define D_SUB_NUM   (10)

//------------------------------------------------
//  型定義(Type definition)
//------------------------------------------------
typedef struct
{
    long num1;
    char moji[D_SUB_NUM];
} S_SUBINFO;

//------------------------------------------------
//  プロトタイプ宣言(Prototype declaration)
//------------------------------------------------
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_isalpha(int c);
int 	ft_digit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
void			*ft_memset(void *b, int c, size_t len );
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void 			*ft_memcpy(void *buf1, const void *buf2, size_t n);
int	            ft_strncmp(const char *s1, const char *s2, size_t n);


//------------------------------------------------
#endif