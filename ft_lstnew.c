#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));

	if (!list)
		return (NULL);
	return (list);
}