CFLAGS = -Wall -Wextra -Werror

CC = gcc

NAME = libft.a

OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o  ft_strlen.o ft_memset.o

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) cr $@ $^

clean:
	-$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	-$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re





# NAME =	libft.a
# SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c  
# # OBJS = ${SRCS:%.c=%.o}
# OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o
# # SRCDIR = ./srcs
# HEDDIR = ./includes

# INCDIR  = -I../inc
 
# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# RM = rm -f
# all: ${NAME}
	
# $(NAME): $(OBJS)
# 	ar r$(NAME) $^

# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME) $(OBJS)

# re:    fclean all

# .PHONY :
# 	all clean fclean re 