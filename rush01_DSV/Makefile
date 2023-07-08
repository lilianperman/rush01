CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = rush01
SRC = padding_loop.c utils.c main.c case.c set_struct.c padding_matriz.c padding_sides.c padding_vertical.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
