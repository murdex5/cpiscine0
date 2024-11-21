CC = gcc

SRCDIR = srcs

CFILES = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = include/ft_ft.h

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean:
	clean rm -r $(NAME)


re: fclean $(NAME)


.PHONY: all clean fclean re
