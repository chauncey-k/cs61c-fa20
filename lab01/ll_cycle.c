#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node * tortoise;
    node * hare;
    tortoise = head;
    hare = head;
    while(hare != NULL && tortoise != NULL)
    {
        hare = hare->next;
        if (hare == NULL)
        {
            break;
        }
        hare = hare->next;
        if (hare == NULL)
        {
            break;
        }
        tortoise = tortoise->next;
        if (hare == tortoise)
        {
            return 1;
        }
    }
    return 0;
}