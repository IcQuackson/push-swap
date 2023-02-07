
NAME = push_swap.a
CC = cc
RM = rm -f
FLAGS = -g -Wall -Werror -Wextra
AR	= ar rcs

OBJS = $(SRC:.c=.o)
lst_operations_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c
lst_operations_PATH = lst_operations/
lst_operations_OBJS = $(lst_operations_SRCS:.c=.o)

STACK_OPS_SRCS = high_level_operations1.c high_level_operations2.c high_level_operations3.c operations.c double_operations.c
STACK_OPS_PATH = stack_operations/
STACK_OPS_OBJS = $(STACK_OPS_SRCS:.c=.o)

SMART_OPS_SRCS = smart_operations.c
SMART_OPS_PATH = smart_operations/
SMART_OPS_OBJS = $(SMART_OPS_SRCS:.c=.o)

SORT_OPS_SRCS = sorting_operations.c
SORT_OPS_PATH = sorting_operations/
SORT_OPS_OBJS = $(SORT_OPS_SRCS:.c=.o)

PUSH_SWAP_SRCS = utils.c utils2.c argv_checkers.c ft_atol.c main.c
PUSH_SWAP_PATH = ./
PUSH_SWAP_OBJS = $(PUSH_SWAP_SRCS:.c=.o)

ARGS =  2 3 1

all: $(NAME)

$(NAME)	:	$(addprefix $(PUSH_SWAP_PATH), $(PUSH_SWAP_OBJS)) \
			$(addprefix $(lst_operations_PATH), $(lst_operations_OBJS)) \
			$(addprefix $(STACK_OPS_PATH), $(STACK_OPS_OBJS)) \
			$(addprefix $(SMART_OPS_PATH), $(SMART_OPS_OBJS)) \
			$(addprefix $(SORT_OPS_PATH), $(SORT_OPS_OBJS))
			@ar rc $(NAME) $(addprefix $(PUSH_SWAP_PATH), $(PUSH_SWAP_OBJS)) \
						   $(addprefix $(lst_operations_PATH), $(lst_operations_OBJS)) \
						   $(addprefix $(STACK_OPS_PATH), $(STACK_OPS_OBJS)) \
						   $(addprefix $(SMART_OPS_PATH), $(SMART_OPS_OBJS)) \
						   $(addprefix $(SORT_OPS_PATH), $(SORT_OPS_OBJS))
			@ranlib $(NAME)

clean:
			@rm -rf $(addprefix $(PUSH_SWAP_PATH), $(PUSH_SWAP_OBJS)) \
					$(addprefix $(lst_operations_PATH), $(lst_operations_OBJS)) \
					$(addprefix $(STACK_OPS_PATH), $(STACK_OPS_OBJS)) \
					$(addprefix $(SMART_OPS_PATH), $(SMART_OPS_OBJS)) \
					$(addprefix $(SORT_OPS_PATH), $(SORT_OPS_OBJS))
			@rm -rf main

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

main:		$(NAME)
			$(CC) $(FLAGS) -o main $(NAME)
			./main $(ARGS)

gdb:		$(NAME)
			$(CC) $(FLAGS) -o main $(NAME)
			gdb --args main $(ARGS)

test:		$(NAME)
			$(CC) $(FLAGS) -o main $(NAME)
			./main 1 3 2147483648

tests:		$(NAME)
			$(CC) $(FLAGS) -o main $(NAME)
			./main -2147483649 -1 3 2 1
			./main 2147483648 -1 3 2 1
			./main --1 3 2 1
			./main 0 3 2 0
			./main 01 3 2 0
			./main 1 3 2147483647
			./main 1 3 -2147483648

.PHONY: all clean fclean re main gdb

$(PUSH_SWAP_PATH)%.o:	$(PUSH_SWAP_PATH)%.c
			$(CC) $(FLAGS) -o $@ -c $<

$(lst_operations_PATH)%.o:	$(lst_operations_PATH)%.c
			$(CC) $(FLAGS) -o $@ -c $<

$(STACK_OPS_PATH)%.o:	$(STACK_OPS_PATH)%.c
			$(CC) $(FLAGS) -o $@ -c $<

$(SMART_OPS_PATH)%.o:	$(SMART_OPS_PATH)%.c
			$(CC) $(FLAGS) -o $@ -c $<

$(SORT_OPS_PATH)%.o:	$(SORT_OPS_PATH)%.c
			$(CC) $(FLAGS) -o $@ -c $<
