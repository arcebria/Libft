#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *last_node;
    if (!alst || !new)
        return ;
    last_node = ft_lstlast(*alst);
    if (last_node)
        last_node->next = new;
    else
        *alst = new;
}

#include <stdio.h>
int main(void)
{
   
}