# include "push_swap1.h"

void sort_three(t_list **stack_a)
{
	int a;
	int b;
	int c;
	
	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (a > b && b > c)
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (a > c && c > b)
		rotate_a(stack_a);
	else if (b > c && c > a)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	else if (b > a && a > c)
		reverse_rotate_a(stack_a);
	else if (c > a && a > b)
		swap_a(stack_a);
}

void sort_five(t_list **stack_a, t_list **stack_b)
{
    while (ft_lstsize(*stack_a) > 5)
    {
        int max = ft_find_max(*stack_a);
        int index = ft_find_index(*stack_a, max);

        if (index < ft_lstsize(*stack_a) - index)
        {
            while ((*stack_a)->value != max)
                rotate_a(stack_a);
        }
        else
        {
            while ((*stack_a)->value != max)
                reverse_rotate_a(stack_a);
        }

        push_b(stack_a, stack_b);
    }

    sort_three(stack_a);

    while (*stack_b)
    {
        push_a(stack_a, stack_b);

        if ((*stack_a)->next && (*stack_a)->value > (*stack_a)->next->value)
            swap_a(stack_a);
    }
}

