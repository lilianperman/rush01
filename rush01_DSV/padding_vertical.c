#include "rush01.h"

void	check_row_down(int **mtz, t_mtz *sides)
{
	int	row;
	int	col;
	int	i;

	i = 1;
	row = 5;
	col = 0;
	while (++col < 5)
	{
		if (sides->row_down[col] == 4)
		{
			while (--row > 0)
			{
				mtz[row][col] = i;
				i += 1;
			}
		}
		else if (sides->row_down[col] == 1)
			mtz[4][col] = 4;
		else if (sides->row_down[col] == 2)
		{
			if (sides->row_up[col] == 1)
				mtz[4][col] = 3;
			else if (sides->row_up[col] == 3)
				mtz[3][col] = 4;
		}
	}
}

void	check_row_up(int **mtz, t_mtz *sides)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (++col < 5)
	{
		if (sides->row_up[col] == 4)
		{
			while (++row < 5)
				mtz[row][col] = row;
		}
		else if (sides->row_up[col] == 1)
			mtz[1][col] = 4;
		else if (sides->row_up[col] == 2)
		{
			if (sides->row_down[col] == 1)
				mtz[1][col] = 3;
			else if (sides->row_down[col] == 3)
				mtz[2][col] = 4;
		}
	}
}

void	padding_vertical(int **mtz, t_mtz *sides)
{
	check_row_up(mtz, sides);
	check_row_down(mtz, sides);
	padding_sides(mtz, sides);
}
