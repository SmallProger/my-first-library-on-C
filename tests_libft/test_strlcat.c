#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"
#include <string.h>

static void		ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

static void		check_strlcat(char *dest, char *src, int size, int dest_len)
{
	ft_print_result(ft_strlcat(dest, src, size));
	write(1, "\n", 1);
	write(1, dest, dest_len);
	free(dest);
}

int				main(int argc, const char *argv[])
{
	char	*dest;
	int		arg;
	int		dest_len;

	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)) || argc == 1)
		return (0);
	memset(dest, 0, dest_len);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
	{
		dest[11] = 'a';
		check_strlcat(dest, "lorem", 15, dest_len);
	}
	else if (arg == 2)
		check_strlcat(dest, "", 15, dest_len);
	else if (arg == 3)
	{
		dest[0] = '\0';
		dest[11] = 'a';
		check_strlcat(dest, "lorem ipsum", 15, dest_len);
	}
	else if (arg == 4)
	{
		dest[14] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	}
	else if (arg == 5)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 0, dest_len);
	}
	else if (arg == 6)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 1, dest_len);
	}
	else if (arg == 7)
	{
		memset(dest, 'r', 15);
		check_strlcat(dest, "lorem ipsum dolor sit amet", 5, dest_len);
	}
	else if (arg == 8)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 6, dest_len);
	}
	else if (arg == 9)
	{
		memset(dest, 'r', 14);
		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	}
	return (0);
}
