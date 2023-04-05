#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_isspace(char c)
{
	return (c == 32 || c == '\n' || c == '\t');
}

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
