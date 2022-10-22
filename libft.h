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
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *dest, char *src);
int				ft_isalpha(int c);
int 			ft_isdigit(int c);
int 			ft_isalnum(int c);
int 			ft_isascii(int c);
int 			ft_isprint(int c);
void			*ft_memset(void *b, int c, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
void 			*ft_memcpy(void *buf1, const void *buf2, size_t n);
int	            ft_strncmp(const char *s1, const char *s2, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *buf, int ch, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int             ft_toupper(int c);
int             ft_tolower(int c);
char            *ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
char            *ft_substr(char const *s, unsigned int start,size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			**ft_split(char const *str, char const *charset);






#endif