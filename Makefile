# must include $(NAME), all, clean, fclean et re
NAME = philosophers

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = 	./src/philosophers.c ./src/error.c

OBJ = $(SRCS:%c=%o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Your shit is compiling"
	@echo ""
	@echo ""
	@$(CC) $(CFLAGS) $(OBJ) -o philosophers
	@echo "Your shit is compiled"
	@echo ""


clean:
	@rm -rf $(NAME) *.out *.exe ./src/*.o ./philosophers
	@echo "(๐ อกโฏอส อก)๐"

fclean: clean
	@rm -rf $(NAME) *.out *.exe ./src/*.o ./philosophers
	@echo ""
	@echo "Your shit is clean af!"
	@echo ""
	@echo "(๐ อกโฏอส อก)๐"
	@echo ""

re:	fclean all