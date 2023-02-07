/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:26:21 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/07 00:11:08 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_operations/stack_operations.h"
#include "lst_operations/lst_operations.h"
#include "smart_operations/smart_operations.h"
#include "sorting_operations/sorting_operations.h"
#include "others.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;
	int		i;

	if (argc > 1)
	{
		head_a = NULL;
		head_b = NULL;
		i = 0;
		if (!check_arguments(argc, argv))
		{
			printf("Failed\n");
			return (0);
		}
		/* if (!check_if_duplicate(argc, argv))
		{
			printf("Failed\n");
			return (0);
		} */
		while (++i < argc)
		{
			if (!add_new_node(argv[i], &head_a))
			{
				printf("Failed\n");
				free_stack(head_a);
				return (0);
			}
		}
		write(1, "---------------------------------------\n", 40);
		write(1, "Init a and b:\n", 14);
		print_stacks(head_a, head_b);
		//sort(head_a, head_b);
		// Push b
		/* push_b(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head);
		push_b(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head);
		push_b(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head); */
		
		// Push a
		/* push_a(&stack_b_head, &stack_a_head);
		print_stacks(stack_a_head, stack_b_head); */
		
		/* rotate_a(stack_a_head);
		print_stacks(stack_a_head, NULL);

		rotate_ab(stack_a_head, stack_b_head);
		print_stacks(stack_a_head, stack_b_head);

		reverse_rotate_ab(stack_a_head, stack_b_head);
		print_stacks(stack_a_head, stack_b_head); */

		/* printf("max index: %d\n", get_index_of_max_value(stack_a_head));
		printf("min index: %d\n", get_index_of_min_value(stack_a_head)); */
		
		/* get_lst_to_top(stack_a_head, argc - 1, 3, rotate_a, reverse_rotate_a);
		write(1, "---------------------------------------\n", 40);
		print_stacks(stack_a_head, stack_b_head); */

		//get_lst_to_bot(head_a, 1, rotate_a, reverse_rotate_a);
		write(1, "---------------------------------------\n", 40);
		sort(head_a, head_b);
		write(1, "---------------------------------------\n", 40);
		print_stacks(head_a, NULL);
	}
}

