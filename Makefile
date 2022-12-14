# must include $(NAME), all, clean, fclean et re
NAME = philosophers

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = 	./src/philosophers.c ./src/error.c

OBJ = $(SRCS:%c=%o)

LIBFT = ./libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT) :
	@echo "Your libft is compiling"
	@echo ""
	@$(MAKE) -C libft
	@echo ""

$(NAME): $(OBJ)
	@echo "Your shit is compiling"
	@echo ""
	@echo ""
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o philosophers
	@echo "Your shit is compiled"
	@echo ""


clean:
	@rm -rf $(NAME) *.out *.exe ./src/*.o ./philosophers
	@echo "(👍 ͡ ͜ʖ ͡)👍"

fclean: clean
	@rm -rf $(NAME) *.out *.exe ./src/*.o ./libft/*.a ./libft/src/*.o ./philosophers
	@echo ""
	@echo "Your shit is clean af!"
	@echo ""
	@echo "(👍 ͡ ͜ʖ ͡)👍"
	@echo ""

re:	fclean all