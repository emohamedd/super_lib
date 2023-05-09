CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c
OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

$(NAME): $(OBJS)
	ar -rcs $@ $^ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all