#include <unistd.h>
#include <stdio.h>

int ft_isspace(char c)
{
	return (c == 32 || c == '\n' || c == '\t');
}

int	main(int ac, char **av)
{
	int i = 0;
	int lock = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (!ft_isspace(av[1][i]) && ft_isspace(av[1][i - 1]) && lock)
				break;
			if (!ft_isspace(av[1][i]))
				{
					write  (1, &av[1][i], 1);
					lock = 1;
				}
			i++;
		}
	}
	write (1, "\n", 1);
}