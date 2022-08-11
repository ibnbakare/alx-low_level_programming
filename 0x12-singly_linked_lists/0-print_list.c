#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t count =0;
    if(h == NULL)
    {
        return (0);
    }
    while (h !=  NULL)
    {
        if (h->str == NULL)
        {
            printf("[%d] %s\n", 0, "(nill)");
        }
        
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }
        h= h->next;
        count++;
    }
    return(count);




    
}
