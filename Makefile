cc = gcc

CFLAGS = -Wall -Wextra -Werror -I./includes

TARGET = LIBFT

# (4)コンパイル対象のソースコード
SRCS    = ./srcs/ft_atoi.c ./srcs/ft_bzero.c ./srcs/ft_calloc.c ./srcs/ft_isalnum.c ./srcs/ft_isascii.c ./srcs/ft_isprint.c ./srcs/ft_strlen.c ./srcs/ft_memset.c ./srcs/ft_bzero.c ./srcs/ft_memcpy.c ./srcs/ft_memmove.c ./srcs/ft_strlcpy.c ./srcs/ft_strlcat.c ./srcs/ft_toupper.c ./srcs/ft_tolower.c 
# (5)オブジェクトファイル名
OBJS    = $(SRCS:.cpp=.o)
 
# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -I../inc
 
# # (7)ライブラリファイルのあるディレクトリパス
# LIBDIR  = 
 
# # (8)追加するライブラリファイル
# LIBS    = 

# (9)ターゲットファイル生成
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)
	
# (10)オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	-rm -f $(OBJS) $(TARGET) *.d