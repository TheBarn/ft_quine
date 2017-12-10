CC = gcc
NAME_C = Colleen
NAME_G = Grace
NAME_S = Sully
SRC_C = Colleen.c
SRC_G = Grace.c
SRC_S = Sully.c
CFLAGS += -Wall -Wextra -Werror

all: $(NAME_C) $(NAME_G) $(NAME_S)

$(NAME_C):
	$(CC) $(CFLAGS) -o $(NAME_C) $(SRC_C)

$(NAME_G):
	$(CC) $(CFLAGS) -o $(NAME_G) $(SRC_G)

$(NAME_S):
	$(CC) $(CFLAGS) -o $(NAME_S) $(SRC_S)

clean:
	@rm -f $(NAME_C) $(NAME_G) $(NAME_S)

fclean: clean

re: fclean all

.PHONY: clean all re fclean
