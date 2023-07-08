#include "rush01.h"

void	check_col_right(int **mtz, t_mtz *sides)
{
	int row;
	int col;
	int i;

	i = 1;
	row = 0;
	col= 5;
	while (++row < 5)
	{
		if (sides->col_right[row] == 4)
		{
			while (--col > 0)
			{
				mtz[row][col] = i;
				i += 1;
			}
		}
		else if (sides->col_right[row] == 1)
			mtz[row][4] = 4;
		else if (sides->col_right[row] == 2)
		{
			if (sides->col_left[row] == 1)
				mtz[row][4] = 3;
			else if (sides->col_left[row] == 3)
				mtz[row][3] = 4;
		}
	}
}

void	check_col_left(int **mtz, t_mtz *sides)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (++row < 5)
	{
		if (sides->col_left[row] == 4)
		{
			while (++col < 5)
				mtz[row][col] = col;
		}
		else if (sides->col_left[row] == 1)
			mtz[row][1] = 4;
		else if (sides->col_left[row] == 2)
		{
			if (sides->col_left[row] == 1)
				mtz[row][1] = 3;
			else if (sides->col_left[row] == 3)
				mtz[row][2] = 4;
		}
	}
}

void	padding_sides(int **mtz, t_mtz *sides)
{
	check_col_left(mtz, sides);
	check_col_right(mtz, sides);
}
