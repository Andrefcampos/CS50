#include <stdio.h>
#include "../cs50.h"

void	print_char(int flag)
{
	if (flag == 1)
		printf("#");
	else if (flag == 0)
		printf(" ");
}

int	main(void)
{
	int	i;
	int	input;
	int	flag;
	int	j;

	do {
		input =  get_int("Put one number: ");
	} while (input < 0 || input > 8);
	j = 0;
	while (j < input)
	{
		flag = 0;
		i = 0;
		while (i <= input)
		{
			if (i == input - j)
				flag = 1;
			print_char(flag);
			i++;
		}
		printf(" ");
		i = -1 ;
		while (i < j)
		{
			print_char(flag);
			i++;
		}
		printf("\n");
		j++;
	}
	return (0);
}
