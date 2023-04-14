NAME = push_swap
NAME_b = checker

SRC = main.c \
	ft_atoi.c \
	ft_split.c \
	ft_lstnew.c \
	ft_putstr.c \
	ft_lstadd_back.c \
	action.c \
	action2.c \
	action3.c \
	actionpa.c \
	sort.c \
	sort_c.c \
	max.c \
	Error.c \
	uitil.c \
	sort_5FF.c \

SRCB = bonus/action_bonus.c \
	bonus/action2_bonus.c \
	bonus/action3_bonus.c \
	bonus/actionpa_bonus.c \
	bonus/checker_main.c \
	bonus/ft_atoi_bonus.c \
	bonus/ft_split_bonus.c \
	bonus/checker.c \
	bonus/Error.c \
	bonus/ft_lstadd_back.c \
	bonus/ft_lstnew.c \
	bonus/ft_putstr.c\
	bonus/get_next_line_utils.c\
	bonus/get_next_line.c\



CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)


all : $(NAME) 

$(NAME) : $(OBJ)
	cc  $(CFLAGS) $(OBJ) -o $(NAME)


bonus : $(NAME_b)

$(NAME_b) : $(OBJB)
	cc  $(CFLAGS) $(OBJB) -o $(NAME_b)

clean:
	rm -f ${OBJ} ${OBJB}

fclean: clean
	rm -f ${NAME} ${NAME_b}

re: fclean all
