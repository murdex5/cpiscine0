# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs/
INCDIR = includes/

CFILES = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c

OFILES = $(CFILES:$(SRCDIR)%.c=$(SRCDIR)%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -I $(INCDIR) -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
