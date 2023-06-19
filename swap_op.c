#include "push_swap1.h"

void	swap_a(t_list **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return;

	t_list *first = *stack_a;
	t_list *second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	ft_printf("sa\n");
}

void	swap_b(t_list **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return;

	t_list *first = *stack_b;
	t_list *second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	ft_printf("sb\n");
}

void	swap_ab(t_list **stack_a, t_list **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	ft_printf("ss\n");
}
