NAME = libfc.a

SRC = fc_choose_fd.c fc_write_cap.c fc_start.c fc_write.c fc_goto.c fc_move.c fc_error.c

OBJ = $(subst .c,.o,$(SRC))

FLAG = -Wall -Wextra -Werror $(INC)
INC = -I./includes/ -I../libft/includes

.SILENT:

all: $(NAME) clean

$(NAME):
	gcc $(FLAG) -c  $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean :
	rm  -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
