/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:54:08 by quackson          #+#    #+#             */
/*   Updated: 2023/02/26 15:56:57 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/* #include <stdio.h>
#include <assert.h> */

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new_lst);
void	ft_lstadd_front(t_list **lst, t_list *new_lst);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
void	ft_lstiter(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);

/* List aux functions */
int		ft_isdigit(int c);
long	ft_atol(const char *nptr);
t_list	**add_new_node(char *n, t_list **head);
void	free_stack(t_list *head);
void	print_stacks(t_list *head_a, t_list *head_b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
size_t	ft_strlen(const char *str);

/* argv checkers */
int		check_arguments(int argc, char **argv);
int		check_if_duplicate(int n, int *values);
int		check_if_zero(char *nptr);
char	**ft_split(char const *s, char c);

/* List aux functions */
int		ft_isdigit(int c);
long	ft_atol(const char *nptr);
t_list	**add_new_node(char *n, t_list **head);
void	free_stack(t_list *head);
void	print_stacks(t_list *head_a, t_list *head_b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
size_t	ft_strlen(const char *str);

/* argv checkers */
int		check_arguments(int argc, char **argv);
int		check_if_duplicate(int n, int *values);
int		check_if_zero(char *nptr);
char	**ft_split(char const *s, char c);

t_list	*get_node_by_value(t_list *head, int value, int *index);
void	get_lst_to_top(t_list *head, int value, void (*r)(t_list*),
			void (*rr)(t_list*));
void	get_lst_to_bot(t_list *head, int value,
			void (*r)(t_list*), void (*rr)(t_list*));
int		get_max_value(t_list *head);
int		get_min_value(t_list *head);
int		calculate_get_lst_to_top(t_list *head, int value);

/* Sorting Operations */
void	sort(t_list **head_a, t_list **head_b);
void	sort_2(t_list *head_a);
void	sort_3(t_list *head_a);
void	sort_4(t_list **head_a, t_list **head_b);
void	sort_5(t_list **head_a, t_list **head_b);
void	sort_more_than_100(t_list **head_a, t_list **head_b, int stack_size);
void	sort_between_5_and_100(t_list **head_a, t_list **head_b);
int		get_smallest_bigger_num(t_list *head_a, int n);
int		get_biggest_smaller_num(t_list *head_a, int n);
int		check_if_in_1st_half(int n, int *indexes, int size);
void	divide_sequence(int min_val, int max_val);
int		*get_indexes(t_list *head, int size);
t_list	*get_max(t_list *head);
t_list	*get_min(t_list *head);
int		check_if_n_in_chunk(int n, int min, int max, int chunk_number);
int		get_num_of_digits(int n);
int		get_n_to_last_digit(int num, int n);
int		check_if_exists_bit_1(t_list *head, int n_bits);
t_list	*get_1st_n_in_chunk(t_list *head, int min, int max, int chunk);
t_list	*get_lst_n_in_chunk(t_list *head, int min, int max, int chunk);
void	push_element(t_list **head_a, t_list **head_b, int h1, int h2);

/* High level operations */
void	swap_a(t_list *head_a);
void	swap_b(t_list *head_b);
void	swap_ab(t_list *head_a, t_list *head_b);
void	push_a(t_list **popped_head, t_list **pushed_head);
void	push_b(t_list **popped_head, t_list **pushed_head);
void	rotate_a(t_list *head_a);
void	rotate_b(t_list *head_b);
void	rotate_ab(t_list *head_a, t_list *head_b);
void	reverse_rotate_a(t_list *head_a);
void	reverse_rotate_b(t_list *head_b);
void	reverse_rotate_ab(t_list *head_a, t_list *head_b);

/* List single operations */
t_list	*get_node(t_list *head, int i);
void	swap(t_list *head, int i, int j);
void	push(t_list **popped_head, t_list **pushed_head);
void	rotate(t_list	*head);
void	reverse_rotate(t_list	*head);

/* List double operations */
void	double_swap(t_list *head_a, t_list *head_b);
void	double_rotate(t_list *head_a, t_list *head_b);
void	double_reverse_rotate(t_list *head_a, t_list *head_b);

#endif