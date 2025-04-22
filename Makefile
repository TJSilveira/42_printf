NAME = ft_printf

CC = gcc

CFLAGS = -Wall -Werror -Wextra

#define 
LIBFT_DIR = ./libft/
LIBFT = $(LIBFT_DIR)libft.a

SRC_DIR = ./src/

SRC_FILES = ft_printf.c \
			ft_print_c.c \
			ft_print_int.c \
			ft_print_p.c \
			ft_print_s.c \
			ft_print_u.c \
			ft_print_x.c \
			ft_print_X.c \
			ft_atoi_simple.c

SRC_TEST = $(addprefix $(SRC_DIR),test.c)
SRC = $(addprefix $(SRC_DIR),$(SRC_FILES))

INCLUDES = -I ./includes/ -I $(LIBFT_DIR)

#Object files
OBJS = $(SRC:.c=.o)
OBJS_TEST = $(SRC_TEST:.c=.o)

all: ${NAME}

$(LIBFT):
	make -C $(LIBFT_DIR)

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -L${LIBFT_DIR} -lft -o ${NAME}

test: ${LIBFT} ${OBJS} ${OBJS_TEST}
	${CC} ${CFLAGS} ${OBJS} ${OBJS_TEST} -L${LIBFT_DIR} -lft -o test

%.o: %.c
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

clean:
	rm -f ${OBJS} ${OBJS_TEST}

fclean: clean
	rm -f ${NAME} test

retest: fclean test 

.PHONY: all clean fclean re