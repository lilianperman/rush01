CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = rush01
SRC = utils.c main.c ##fill_mtz.c
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
