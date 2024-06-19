NAME= libftprintf.a

SRC= \
	ft_printf.c \
	ft_putnbr_base.c\
	ft_putnbr_xx.c\
	libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_itoa.c\
	libft/ft_memcpy.c \
	libft/ft_putendl_fd.c libft/ft_split.c libft/ft_striteri.c\
	libft/ft_strlcpy.c libft/ft_strncmp.c \
	libft/ft_strtrim.c libft/ft_toupper.c libft/ft_atoi.c libft/ft_isdigit.c\
	libft/ft_memchr.c \
	libft/ft_memset.c libft/ft_putnbr_fd.c libft/ft_strchr.c libft/ft_strjoin.c\
	libft/ft_strlen.c \
	libft/ft_strnstr.c libft/ft_substr.c libft/ft_calloc.c libft/ft_isalpha.c\
	libft/ft_isprint.c \
	libft/ft_memcmp.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c\
	libft/ft_strdup.c libft/ft_strlcat.c \
	libft/ft_strmapi.c libft/ft_strrchr.c libft/ft_tolower.c libft/ft_memmove.c\


OBJ = $(SRC:.c=.o)

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c $< -I . -I libft -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
