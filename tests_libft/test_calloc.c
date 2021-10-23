#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"
#include <stdio.h>
int		main(int argc, const char *argv[])
{
	char	*str;

	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, sizeof(char));
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
		free(str);
	}
	return (0);
}
