NAME = libft.a
OBJ_FILES = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strchr.o ft_strlcat.o \
ft_strlcpy.o ft_strlen.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_memset.o ft_bzero.o ft_atoi.o \
ft_strnstr.o ft_memcpy.o ft_calloc.o ft_memmove.o ft_strncmp.o ft_strdup.o ft_memchr.o ft_memcmp.o \
ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o \
ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_itoa.o
HEADER_DIR = libft.h
AR = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $@ $^

%.o: %.c $(HEADER_DIR)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

.PHONY: all clean fclean re
