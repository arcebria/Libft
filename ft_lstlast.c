#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    while (lst)
    {
        if (lst->next == NULL)
            return (lst);
        lst = lst->next;
    }
}
/*
#include <stdio.h>
int main(void)
{
    t_list  *node = ft_lstnew("hola");
    t_list  *node2 = ft_lstnew("adios");

    node->next = node2;
    node2->next = NULL;
    printf("%s\n", (char *)ft_lstlast(node)->content);
    return (0);
}*/