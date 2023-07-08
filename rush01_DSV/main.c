/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:26:01 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/07 10:20:43 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	**start_matriz(void)

{
	int	**matriz;
	int	i;
	int	j;

//	matriz = malloc(sizeof(int *) * 7);
	matriz = calloc(sizeof(int *), 7);
	if (!matriz)
		return (NULL);
	i = -1;
	while (++i < 6)
	{
		j = -1;
//		matriz[i] = malloc(sizeof(int) * 6);
		matriz[i] = calloc(sizeof(int), 6);
		if (!matriz[i])
			return (NULL);
		while (++j < 6)
			matriz[i][j] = 7;
	}
	matriz[i] = NULL;
	return (matriz);
}

void	init_mtz(int *num)

{
	int	**mtz;

	mtz = start_matriz();
	padding_loop(mtz);
	set_struct(mtz, num);
}

int	valid_oposite(int *num)
{
	int	i;

	i = -1;
	while (++i < 12)
	{
		if (case_logic(num, i) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	validate_argv(int *num)
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		if (num[i] != 1 && num[i] != 2 && num[i] != 3 && num[i] != 4)
		{
			write(1, "Error3\n", 7);
			return (1);
		}
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
	int	num[17];
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 17)
	{
		while (argv[i])
			num[j++] = ft_atoi(argv[i++]);
		if (!validate_argv(num))
		{
			init_mtz(num);
		}
	}
	else
		write(1, "Error1\n", 7);
	return (0);
}
