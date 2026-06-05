#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int 	swap;
	t_list* curr = lst;

	while (curr && curr->next)
	{
		if(!cmp(curr->data, curr->next->data))
		{
			swap = curr->data;
			curr->data = curr->next->data;
			curr->next->data = swap;
			curr = lst;
		}
		else
			curr = curr->next;
	}
	return(lst);
}
