NAME		= libft.a

SRC_DIR		= srcs/
INC_DIR		= includes/

SRC_FILES	= ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c

SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJS		= ${SRCS:.c=.o}

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

LIBC		= ar rc
RM			= rm -f

all: ${NAME}

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re