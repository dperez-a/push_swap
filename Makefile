################################################################################
#								    CONFIG									   #
################################################################################
NAME = push_swap
INC_DIR = ./include/
CC = cc -g3
CFLAGS = -g -Wall -Wextra -Werror -I$(INC_DIR)
RM = rm -rf
LDFLAGS = -Llibft/Libft -lft

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRC_DIR = ./src/

SRCS = \
	$(SRC_DIR)list_functions.c \
	$(SRC_DIR)main.c \
	$(SRC_DIR)parse.c \
	$(SRC_DIR)push.c \
	$(SRC_DIR)radix_sort.c \
	$(SRC_DIR)rotate.c \
	$(SRC_DIR)sort_few_five.c \
	$(SRC_DIR)sort_few_utils.c \
	$(SRC_DIR)sort_few.c \
	$(SRC_DIR)swap.c \
	$(SRC_DIR)utils.c

OBJS = $(SRCS:.c=.o)

################################################################################
#                             		 NAME                                      #
################################################################################

$(NAME): $(OBJS) $(INC_DIR)push_swap.h
	@make -C ./libft/Libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LDFLAGS)

all: $(NAME)
	@echo "Done!"

clean:
	@make -C libft/Libft clean
	@$(RM) $(OBJS)

fclean: clean
	@make -C libft/Libft fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
