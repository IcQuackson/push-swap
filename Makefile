
NAME = push_swap.a
CC = gcc
RM = rm -f
FLAGS = -g -Wall -Werror -Wextra
AR	= ar rcs

OBJS = $(SRC:.c=.o)
lst_operations_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c
lst_operations_OBJS = $(lst_operations_SRCS:.c=.o)
lst_operations_PATH = lst_operations/

PUSH_SWAP_SRCS = operations.c double_operations.c utils.c argv_checkers.c ft_atol.c ft_isdigit.c main.c
PUSH_SWAP_PATH = ./
PUSH_SWAP_OBJS = $(PUSH_SWAP_SRCS:.c=.o)

ARGS = 2147483647 - 3 2 1

all: $(NAME)

$(NAME)	:	$(addprefix $(PUSH_SWAP_PATH), $(PUSH_SWAP_OBJS)) $(addprefix $(lst_operations_PATH), $(lst_operations_OBJS))
			@ar rc $(NAME) $(addprefix $(PUSH_SWAP_PATH), $(PUSH_SWAP_OBJS)) $(addprefix $(lst_operations_PATH), $(lst_operations_OBJS))
			@ranlib $(NAME)

clean:
			@rm -rf $(addprefix $(PUSH_SWAP_PATH), $(PUSH_SWAP_OBJS)) $(addprefix $(lst_operations_PATH), $(lst_operations_OBJS))
			@rm -rf main

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

main:		$(NAME)
			$(CC) $(FLAGS) -o main $(NAME)
			./main $(ARGS)
gdb:
			$(CC) $(FLAGS) -o main $(NAME)
			gdb --args main $(ARGS)

.PHONY: all clean fclean re main gdb

$(PUSH_SWAP_PATH)%.o:	$(PUSH_SWAP_PATH)%.c
			$(CC) $(FLAGS) -o $@ -c $<

$(lst_operations_PATH)%.o:	$(lst_operations_PATH)%.c
			$(CC) $(FLAGS) -o $@ -c $<