#include "push_swap1.h"

void	reverse_rotate_a(t_list **stack_a)
{
	t_list *last = *stack_a;
	t_list *prev = NULL;
	while (last && last->next)
	{
		prev = last;
		last = last->next;
	}
	if (!last || !prev)
		return;
	prev->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	ft_printf("rra\n");
}

void reverse_rotate_b(t_list **stack_b)
{
	t_list	*last = *stack_b;
	t_list	*prev = NULL;
	while (last && last->next)
	{
		prev = last;
		last = last->next;
	}

	if (!last || !prev)
		return;
	prev->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	ft_printf("rrb\n");
}

void	reverse_rotate_ab(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
	ft_printf("rrr\n");
}