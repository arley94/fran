/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:06:05 by fsantill          #+#    #+#             */
/*   Updated: 2023/12/12 14:10:54 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "Libft/libft.h"

typedef struct stack
{
	int				number;
	struct stack	*next;
}					t_stack;

int		args_are_only_numbers_or_spaces(int argc, char **argv);
void	ft_sa(t_stack **lst_a);
void	ft_sb(t_stack **lst_b);
void	ft_ss(t_stack **lst_a, t_stack **lst_b);
void	ft_pa(t_stack **lst_a, t_stack **lst_b);
void	ft_pb(t_stack **lst_a, t_stack **lst_b);

#endif

/*int	tree_states[][4];
void	tree_alphabet(t_automata *a);*/