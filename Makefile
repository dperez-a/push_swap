################################################################################
#								    CONFIG									   #
################################################################################
NAME = push_swap
INC_DIR	=./include/
CC = cc -g3
CFLAGS = -g -Wall -Wextra -Werror -I$(INC_DIR)
RM = rm -rf
LDFLAGS	= -Llibft/Libft -lft
################################################################################
#                                 PROGRAM'S SRCSS                              #
################################################################################

SRC_DIR =	./src/

# On attribuer a la variable SRCS tout les fichier .c dans ./src

SRCS =	$(wildcard $(SRC_DIR)*.c)

# Tranforme les fichiers .c en .o dans chaque fichier de SRCS

OBJS =	$(patsubst %.c, %.o, $(SRCS))

################################################################################
#                             		 NAME                                      #
################################################################################

$(NAME): $(OBJS) $(INC_DIR)push_swap.h
	@make -C ./libft/Libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LDFLAGS)

all : $(NAME)
	@echo "Done!"

clean :
		make -C libft/Libft clean
		$(RM) $(OBJS)

fclean : clean
		@make -C libft/Libft fclean
		@$(RM) $(NAME) $(OBJS)

re : 
		make -C libft/Libft re
		make fclean
		make all

.PHONY: all clean fclean re