NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/ft_putchar.c ./src/ft_swap.c ./src/ft_putstr.c ./src/ft_strlen.c ./src/ft_strcmp.c
INC_DIR = ./inclides/
OBJS = $(SRCS:.c=.o)
AR = ar rc
RM = rm -f
LIB = ranlib

.PHONY: all clean fclean re

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


