#include "rush01.h"

void	init_mtz(int *num)
{
	int i = 0;
	int j = 0;
	int **mtz;

	mtz = (int**)malloc(sizeof(int*) * 4);
	if (!mtz)
		{
			write(1, "Error9\n", 7);
			return ;
		}
	while (i <= 3)
	{
		mtz[i] = (int*)malloc(sizeof(int) * 4);
		if (!mtz[i])
		{
			write(1, "Error8\n", 7);
			return ;
		}
		i++;
	}
	i = 0;
	while (mtz[i] && i <= 3)
	{
		j = 0;
		while (mtz[i][j])
		{
			mtz[i][j]= 0;
			write(1, mtz[i][j], 1);
			j++;
		}
		i++;
	}
//	fill_mtz(mtz, num);
}

int valid_oposite(int *num)
{
	int i = 0;

	while (i <= 11)
	{
		if (num[i] == 1)
		{
			if (num[i + 4] == 1)
				return (1);
		}
		else if (num[i] == 2)
		{
			if (num[i + 4] == 4)
				return (1);
		}
		else if (num[i] == 3)
		{
			if (num[i + 4] == 3 || num[i + 4] == 4)
				return (1);
		}
		else if (num[i] == 4)
		{
			if (num[i + 4] != 1)
				return (1);
		}
		i++;
	}
	return (0);
}

int	validate_argv(int *num)
{
	int i = 0;

	while (i <= 15)
	{
		if (num[i] != 1 && num[i] != 2 && num[i] != 3 && num[i] != 4)
		{
			write(1, "Error3\n", 7);
			return (1);
		}
		i++;
	}
	if (valid_oposite(num) == 1)
	{
		write(1, "Error2\n", 7);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int num[17];
	int i = 0;

	if (argc == 17)
	{
		while (argv[i + 1])
		{
			num[i] = ft_atoi(argv[i + 1]);
			i++;
		}
		if (!validate_argv(num))
			init_mtz(num);
	}
	else
		write(1, "Error1\n", 7);
	return (0);
}
