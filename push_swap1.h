#ifndef PUSH_SWAP1_H
# define PUSH_SWAP1_H

# include <stdio.h>
# include <unistd.h>
# include "aux/libft/incs/libft.h"
# include "aux/ft_printf/incs/ft_printf.h"

// SWAP OP
void	swap_a(t_list **stack_a);
void	swap_b(t_list **stack_b);

// PUSH OP
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	swap_ab(t_list **stack_a, t_list **stack_b);

// ROTATE OP
void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	rotate_ab(t_list **stack_a, t_list **stack_b);

// REVERSE ROTATE OP
void	reverse_rotate_a(t_list **stack_a);
void reverse_rotate_b(t_list **stack_b);
void	reverse_rotate_ab(t_list **stack_a, t_list **stack_b);

// SORT THREE
void sort_three(t_list **stack_a);

// SORT FIVE
void	sort_five(t_list **stack_a, t_list **stack_b);

// UTILS
int		ft_find_index(t_list *stack, int value);
int		ft_find_max(t_list *stack);


#endif