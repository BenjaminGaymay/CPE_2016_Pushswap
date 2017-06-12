##
## Makefile for  in /home/BISHOP/delivery/CPool_bistro-matic/lib/my
## 
## Made by Benjamin GAYMAY
## Login   <benjamin.g@epitech.net>
## 
## Started on  Thu Nov  3 14:59:33 2016 Benjamin GAYMAY
## Last update Fri Nov 25 09:39:40 2016 Benjamin GAYMAY
##

SRCS	= ./my/my_putchar.c \
	  ./my/my_getnbr.c \
	  ./my/my_put_nbr.c \
	  ./my/my_putstr.c \
	  ./my/my_str_isnum.c \

RM	= rm -rf

NAME	= libmy.a

OBJS	= $(SRCS:.c=.o)

CP	= mv

AC	= ar rc

$(NAME): $(OBJS)
	$(AC) $(NAME) $(OBJS)
	ranlib $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

