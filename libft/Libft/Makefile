NAME=libft.a
CC=gcc
CFLAGS=-Wall -Werror -Wextra
SRC =	ft_isdigit.c	\
		ft_isalpha.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlen.c	\
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_calloc.c \
		ft_lstnew.c \
		ft_lstlast.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		get_next_line/get_next_line.c \
		get_next_line/get_next_line_utils.c \
		ft_printf/ft_aux_pf.c\
		ft_printf/ft_printf.c \
		ft_printf/ft_putchar_pf.c \
		ft_printf/ft_puthex_pf.c \
		ft_printf/ft_putnbr_pf.c \
		ft_printf/ft_putptr_pf.c \
		ft_printf/ft_putstr_pf.c \
		ft_printf/ft_pusuint_pf.c \

OBJ = $(SRC:.c=.o)

BONUS= 	ft_lstnew.c			\
		ft_lstlast.c 		\
		ft_lstadd_front.c 	\
		ft_lstadd_back.c 	\
		ft_lstsize.c		\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		
OBJBOUS= $(BONUS:%.c=%.o)
bonuses = .cache
		
all: $(NAME)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)

bonus:$(bonuses)

$(bonuses): $(NAME) $(OBJBONUS)
	ar -rcs $^
	ar -rcs $(bonuses) $^

.PHONY: clean fclean re

clean:
	rm -rf $(OBJ) $(OBJBONUS)
fclean: clean
	rm -rf $(NAME) $(bonuses)
re: fclean $(NAME)