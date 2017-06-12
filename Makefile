##
## Makefile for Makefile in /home/benjamin.g/delivery/CPool_rush2
## 
## Made by Benjamin GAYMAY
## Login   <benjamin.g@epitech.net>
## 
## Started on  Sat Oct 15 11:26:19 2016 Benjamin GAYMAY
## Last update Sat Nov 26 10:18:26 2016 Benjamin GAYMAY
##

CC	= gcc

RM	= rm -f

NAME	= push_swap

LIB	= -L./lib/ -lmy

SRCS	= instructions.c \
	  instructions2.c \
	  instructions3.c \
	  my_push_swap.c \
	  main.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	cd ./lib/ ; $(MAKE) -f Makefile
	$(CC) $(OBJS) -o $(NAME) $(LIB)

clean:
	$(RM) $(OBJS)
	cd ./lib/ ; $(MAKE) clean -f Makefile

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re
