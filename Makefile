SRC = ft_memset.c \
	ft_isalpha.c\
	ft_isascii.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_strlcpy.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_atoi.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memmove.c\
	ft_memcmp.c\
	ft_strlcat.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_calloc.c\
	ft_memcpy.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\


OBJ = $(SRC:.c=.o)

NAME = libft.a


CC = clang

CFLAGS = -Wall -Wextra -Werror


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
	clang ${CFLAGS} -c ${SRC} 
	ar rc $(NAME) ${OBJ}
	ranlib ${NAME}


all: $(NAME)

clean:
	rm -f ${OBJ}
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean re fclean