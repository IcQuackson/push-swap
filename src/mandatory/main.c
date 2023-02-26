/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:26:21 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/26 16:10:35 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (!check_arguments(argc, argv))
		{
			printf("Error\n");
			return (0);
		}
		i = 0;
		while (++i < argc)
		{
			if (!add_new_node(argv[i], &head_a))
			{
				printf("Failed\n");
				free_stack(head_a);
				return (0);
			}
		}
		sort(&head_a, &head_b);
		print_stacks(head_a, head_b);
	}
}
