NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

#define 
LIBFT_DIR = ./libft/
LIBFT = $(LIBFT_DIR)libft.a

SRC_DIR = ./src/
OBJS_DIR = ./objs/

SRC_FILES = ft_printf.c \
			ft_print_c.c \
			ft_print_int.c \
			ft_print_p.c \
			ft_print_s.c \
			ft_print_u.c \
			ft_print_x.c \
			ft_print_X.c \
			ft_atoi_simple.c \
			ft_print_width.c \
			ft_putunsnbr_fd.c \
			ft_flags.c

SRC_TEST = $(addprefix $(SRC_DIR),test.c)
SRC = $(addprefix $(SRC_DIR),$(SRC_FILES))

INCLUDES = -I ./includes/ -I $(LIBFT_DIR)

#Object files
OBJS_FILES = $(SRC_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR),$(OBJS_FILES))
OBJS_TEST = $(OBJS_DIR)test.o

all: ${NAME}

bonus: all

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

${NAME}: $(LIBFT) $(OBJS_DIR) $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib	$(NAME)

test: ${LIBFT} $(OBJS_DIR) ${OBJS} ${OBJS_TEST}
	${CC} ${CFLAGS} ${OBJS} ${OBJS_TEST} -L${LIBFT_DIR} -lft -o test

$(OBJS_DIR)%.o: $(SRC_DIR)%.c
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

clean:
	rm -rf ${OBJS_DIR}

fclean: clean
	rm -f ${NAME} test

re: fclean ${NAME}

retest: fclean test 

.PHONY: all clean fclean re