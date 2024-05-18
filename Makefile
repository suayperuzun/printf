NAME= libftprintf.a

LIBFT_DIR= libft
LIBFT= $(LIBFT_DIR)/libft.a

SRC= \
	ft_printf.c \
	ft_putnbr_base.c\
	ft_putnbr_xx.c

OBJ = $(SRC:.c=.o)

CFLAGS= -Wall -Wextra -Werror -g

INCLUDES= -I$(LIBFT_DIR)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
