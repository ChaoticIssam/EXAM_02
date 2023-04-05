#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int start, int end)
{
	int *range = malloc(sizeof(int *));
	int i = 0;

	if (start < end)
	{
		while (start <= end)
		{
			{
				range[i] = start;
				i++;
				start++;
			}
		}
	}
	else if (start > end)
	{
		while(end <= start)
		{
			range[i] = start;
			i++;
			start--;
		} 
	}
	return (range);
}
