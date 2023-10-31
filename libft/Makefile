CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_isalnum.c ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_toupper.c \
		ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
		ft_strlcat.c ft_strlcpy.c ft_strjoin.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_calloc.c ft_substr.c ft_strdup.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_atoi.c

OBJS = $(SRCS:.c=.o)
BONUS_SRCS = ft_lstnew.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)
HEAD = ./
NAME = libft.a
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c -I $(HEAD) $(SRCS)
	$(AR) $(NAME) $(OBJS)

bonus: 
	$(CC) $(CFLAGS) -c -I $(HEAD) $(BONUS_SRCS)
	$(AR) $(NAME) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: clean fclean all re bonus