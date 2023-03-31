NAME = libft.a
CFLAGS = -Wall -Wextra -Werror 
CC = cc

SRCS = ft_memcmp.c ft_isascii.c ft_isdigit.c ft_isalpha.c ft_toupper.c ft_tolower.c \
	 ft_bzero.c ft_memset.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcpy.c ft_atoi.c ft_strlcat.c ft_strlcpy.c ft_calloc.c \
	ft_strdup.c ft_memmove.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)


$(OBJS):%.o:%.c ft_*.c
	@$(CC) $(CFLAGS) -c $< -o $@


fclean:
	rm -rf *.o
	rm -rf $(NAME)