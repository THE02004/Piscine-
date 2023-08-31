NAME	=	rush-02
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
INC_DIR	=	./includes/
HEADERS	=	$(INC_DIR)/Rush02.h
SRCS	=	./srcs/main.c
OBJECTS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all