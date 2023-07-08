#include "rush01.h"

void	padding_loop(int **mtz)
{
	int i = 0;
	int j = 0;

	while (mtz[i])
	{
		j = 0;
		while (mtz[i][j])
		{
			ft_putnbr(mtz[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
