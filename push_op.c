#include "push_swap1.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;

	if (*stack_b == NULL)
		return ;
	else if (*stack_b != NULL)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = *stack_a;
		*stack_a = temp;
		ft_printf("pa\n");
	}
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;

	if (*stack_a == NULL)
		return ;
	else if(*stack_a != NULL)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = *stack_b;
		*stack_b = temp;
		ft_printf("pb\n");
	}
}
