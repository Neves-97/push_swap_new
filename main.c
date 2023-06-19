#include "push_swap1.h"

// int main()
// {
//     char *coco = "2131234";

//     ft_printf("Stupid ass boy \n");
//     ft_printf("%d\n", ft_atoi(coco));
// }


int main(int argc, char *argv[]) {
    // Check if at least three arguments are provided
    if (argc < 4) {
        printf("Please provide at least three numbers as arguments.\n");
        return 1;
    }

    // Create a stack with three elements
    t_list *stack_a = malloc(sizeof(t_list));
    stack_a->value = atoi(argv[1]);
    stack_a->next = malloc(sizeof(t_list));
    stack_a->next->value = atoi(argv[2]);
    stack_a->next->next = malloc(sizeof(t_list));
    stack_a->next->next->value = atoi(argv[3]);
    stack_a->next->next->next = NULL;

    printf("Stack before sorting: %d -> %d -> %d\n",
           stack_a->value, stack_a->next->value, stack_a->next->next->value);

    // Sort the stack
    sort_three(&stack_a);

    printf("Stack after sorting: %d -> %d -> %d\n",
           stack_a->value, stack_a->next->value, stack_a->next->next->value);

    // Free memory
    free(stack_a->next->next);
    free(stack_a->next);
    free(stack_a);

    return 0;
}
