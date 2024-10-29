NAME= getnextline.a
SRC= get_next_line.c get_next_line_utils.c
CC= cc 
CFLAGS= -Wall -Wextra -Werror

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME) $(OBJ)
re: all clean
.PHONY: all clean fclean re