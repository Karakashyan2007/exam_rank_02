#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *cur = *begin_list;

	while (cur)
	{
		if (cmp(data_ref, cur->data))
		{
			free(cur->data);
		}
		cur = cur ->next;
	}
	
}