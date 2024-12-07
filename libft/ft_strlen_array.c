#include "libft.h"

int	ft_strlen_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}
