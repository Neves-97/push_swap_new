# include "push_swap1.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*temp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next->next = NULL;
	ft_printf("ra\n");
}

void	rotate_b(t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = *stack_b;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next->next = NULL;
	ft_printf("rb\n");
}

void	rotate_ab(t_list **stack_a, t_list **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	ft_printf("rr\n");
}