#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef int         Data;

typedef struct      Node
{
    Data            data;
    struct Node     *next;
}                   Node;

//---------------------------------------
void    push(Node **list, const Data data)
{
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = *list;
    *list = node;
}
//---------------------------------------
void    print_from_head(const Node *list)
{
    if (list)
    {
        printf("%d\n", list->data);
        print_from_head(list->next);
    }
}
//---------------------------------------
void    print_from_tail(const Node *list)
{
    if (list)
    {
        print_from_tail(list->next);
        printf("%d\n", list->data);
    }
}
//---------------------------------------

int     main(void)
{
    int i;
    Node *list = NULL;

    i = 0;
    while (i < 10)
        push(&list, i++);
    print_from_tail(list);
    while (list)
    {
        free(list);
        list = list->next;
    }
    system("leaks list");
    return(0);
}
