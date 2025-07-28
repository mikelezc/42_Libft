
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	negative;
	int	count;
	int	number;

	count = 0;
	negative = 1;
	number = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	if (str[count] == '-')
		negative = -1;
	if (str[count] == '+' || str[count] == '-')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		number = (str[count] - '0') + (number * 10);
		count++;
	}
	return (number * negative);
}
