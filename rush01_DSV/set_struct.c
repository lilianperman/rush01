/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 05:02:10 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/07 10:22:20 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static void	set_col_right(t_mtz *mtz, int *num)

{
	int	i;

	i = 1;
	while (i < 5)
	{
		mtz->col_right[i - 1] = *num;
		num++;
		i++;
	}
}

static void	set_col_left(t_mtz *mtz, int *num)

{
	int	i;

	i = 1;
	while (i < 5)
	{
		mtz->col_left[i - 1] = *num;
		num++;
		i++;
	}
}

static void	set_row_down(t_mtz *mtz, int *num)

{
	int	i;

	i = 1;
	while (i < 5)
	{
		mtz->row_down[i - 1] = *num;
		num++;
		i++;
	}
}

static void	set_row_up(t_mtz *mtz, int *num)

{
	int	i;

	i = 1;
	while (i < 5)
	{
		mtz->row_up[i - 1] = *num;
		num++;
		i++;
	}
}

void	set_struct(int **matriz, int *num)

{
	t_mtz	mtz;

	(void)matriz;
	set_row_up(&mtz, num);
	set_row_down(&mtz, num + 4);
	set_col_left(&mtz, num + 8);
	set_col_right(&mtz, num + 12);
	padding(matriz, &mtz);
	padding_vertical(matriz, &mtz);
//	padding_loop(matriz);
}

/*{row1up row2up row3up rowup}
{row1down row2down row3down rowdown}
{col1left col2left col3left col4left}
{col1right col2right col3right col4right}*/
