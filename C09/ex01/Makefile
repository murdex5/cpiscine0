# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes/include

# Directories
SRCDIR = .
OBJDIR = objs
INCDIR = includes/include

CFILES = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c

OFILES = $(CFILES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	@echo "Creating library $(NAME)"
	ar rcs $(NAME) $(OFILES)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files"
	rm -rf $(OBJDIR)

fclean: clean
	@echo "Removing library $(NAME)"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

