/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:15:54 by fsantill          #+#    #+#             */
/*   Updated: 2023/12/12 16:56:53 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **lst)
{
	t_stack	*aux;

	if (!(*lst) || !(*lst)->next)
		return ;
	aux = (*lst);
	(*lst) = aux->next;
	aux->next = (*lst)->next;
	(*lst)->next = aux;
}

void	ft_sa(t_stack **lst_a)
{
	if (!(*lst_a) || !(*lst_a)->next)
		return ;
	ft_swap(lst_a);
	printf("sa\n");
}

void	ft_sb(t_stack **lst_b)
{
	if (!(*lst_b) || !(*lst_b)->next)
		return ;
	ft_swap(lst_b);
	printf("sb\n");
}

void	ft_ss(t_stack **lst_a, t_stack **lst_b)
{
	ft_swap(lst_a);
	ft_swap(lst_b);
	printf("ss\n");
}


void	ft_pa(t_stack **lst_a, t_stack **lst_b)
{
	t_stack	*aux;

	if (!(*lst_b))
		return ;
	aux = (*lst_b)->next;
	(*lst_b)->next = (*lst_a);

	(*lst_a) = (*lst_b);
	(*lst_b) = aux;
	printf("pa\n");
}

void	ft_pb(t_stack **lst_a, t_stack **lst_b)
{
	t_stack	*aux;

	if (!lst_a)
		return ;
	aux = (*lst_a)->next;
	(*lst_a)->next = (*lst_b);

	(*lst_b) = (*lst_a);
	(*lst_a) = aux;
	printf("pb\n");
}

t_stack	*ft_stack_prev_last(t_stack *lst)
{
	t_stack	*prev;

	if (!lst || !lst->next)
		return (NULL);
	while (lst->next != NULL)
	{
		prev = lst;
		lst = lst->next;
	}
	return (prev);
}

t_stack	*ft_stack_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_rra(t_stack **lst)
{
	t_stack	*prev_last;

	prev_last = ft_stack_prev_last(*lst);
	prev_last->next->next = *lst;
	*lst = prev_last->next;
	prev_last->next = NULL;
	printf("rra\n");
}

void	ft_ra(t_stack **lst)
{
	t_stack	*last;

	last = ft_stack_last(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
	printf("ra\n");
}

void	print_list(t_stack **lst)
{
	t_stack	*start;

	start = *lst;
	while (start != NULL)
	{
		printf("%d\n", start->number);
		start = start->next;
	}
}



int	main(void)
{
	t_stack node_a1, node_a2, node_a3;
	t_stack node_b1, node_b2, node_b3;
	t_stack *start_a, *start_b;

	start_a = &node_a1;
	start_b = &node_b1;

	node_a1.number = 1;
	node_a1.next = &node_a2;
	node_a2.number = 2;
	node_a2.next = &node_a3;
	node_a3.number = 3;
	node_a3.next = NULL;

	node_b1.number = 4;
	node_b1.next = &node_b2;
	node_b2.number = 5;
	node_b2.next = &node_b3;
	node_b3.number = 6;
	node_b3.next = NULL;

	print_list(&start_a);
	//printf("------\n");
	//print_list(&start_b);
	ft_ra(&start_a);
	print_list(&start_a);
	//printf("------\n");
	//print_list(&start_b);
	// ft_pa(&start_a, &start_b);
	// print_list(&start_a);
	// printf("------\n");
	// print_list(&start_b);
	return (0);
}




/*
- sa * swap a: Intercambia los dos primeros elementos del stack a.
No hace nada si hay uno o menos elementos.

- sb * swap b: Intercambia los dos primeros elementos del stack b.
No hace nada si hay uno o menos elementos.

- ss * swap a y swap b a la vez.

- pa * push a: Toma el primer elemento del stack b y lo pone el primero
en el stack a. No hace nada si b está vacío.

- pb * push b: Toma el primer elemento del stack a y lo pone el primero
en el stack b. No hace nada si a está vacío.

* ra * rotate a: Desplaza hacia arriba todos los elementos del stack a
una posición, de forma que el primer elemento se convierte en el último.

* rb * rotate b: Desplaza hacia arriba todos los elementos del stack b
una posición, de forma que el primer elemento se convierte en el último.

* rr * ra y rb al mismo tiempo.

* rra * reverse rotate a: Desplaza hacia abajo todos los elementos del stack
a una posición, de forma que el último elemento se convierte en el primero.

* rrb * reverse rotate b: Desplaza hacia abajo todos los elementos del stack b
una posición, de forma que el último elemento se convierte en el primero.

* rrr * rra y rrb al mismo tiempo.*/