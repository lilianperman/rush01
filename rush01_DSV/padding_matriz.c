/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding_matriz.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 05:34:27 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/07 10:21:32 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	padding_column(int **col, t_mtz *sides)

{
	int	i;

	i = 1;
	col[0][0] = 9;
	col[5][0] = 9;
	col[0][5] = 9;
	col[5][5] = 9;
	while (i < 5)
	{
		col[i][0] = sides->col_left[i - 1];
		col[i][5] = sides->col_right[i - 1];
		i++;
	}
}

void	padding_row(int *row, int *numbers)

{
	int	i;

	i = 0;
	row[0] = 9;
	row[5] = 9;
	while (i < 4)
	{
		row[i + 1] = numbers[i];
		i++;
	}
}

void	padding(int **mtz, t_mtz *sides)

{
	padding_row(mtz[0], sides->row_up);
	padding_row(mtz[5], sides->row_down);
	padding_column(mtz, sides);
}
