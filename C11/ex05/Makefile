SRC = $(wildcard srcs/*.c)

OBJ = $(SRC:.c=.o)

CC = gcc -Wall -Werror -Wextra

HEAD = includes/

NAME = do-op

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

.c.o:
	$(CC) -I $(HEAD) -c $< -o ${<:.c=.o}

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

.PHONY : all clean fclean
