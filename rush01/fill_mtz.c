/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_mtz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:46:13 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/06 11:46:15 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "rush01.h"

void	fill_down(int **mtz, int *num, int i)
{
	int j = 0;
	int k = 0;

	while (i >= 4 && i <= 7)
	{
		k = i - 4;
		if (num[i] == 1)
			mtz[3][k] = 4;
		else if (num[i] == 4)
		{
			j = 3;
			while (j >= 0)
			{
				mtz[j][k] = j + 1;
				j--;
			}
		}
		else if (num[i] == 2)
		{
			if (num[i - 4] == 1)
				mtz[3][k] = 3;
			else if (num[i - 4] == 3)
				mtz[2][k] = 4;
		}
		else if (num[i] == 3 && num[i - 4] == 1)
			mtz[3][k] = 2;
		i++;
	}
	j = 0;
	while (mtz[j])
	{
		k = 0;
		while(mtz[j][k])
		{
			write(1, &mtz[j][k], 1);
			k++;
		}
		j++;
	}
//	fill_left(mtz, num, i);
}

void	fill_mtz(int **mtz, int *num)
{
	int i = 0;
	int j = 0;
	int k;

	while (i <= 3)
	{
		k = i;
		if (num[i] == 1)
			mtz[0][k] = 4;
		else if (num[i] == 4)
		{
			j = i;
			while (j++ <= 3)
				mtz[j][0] = j + 1;
		}
		else if (num[i] == 2)
		{
			if (num[i + 4] == 1)
				mtz[0][k] = 3;
			else if (num[i + 4] == 3)
				mtz[1][k] = 4;
		}
		else if (num[i] == 3 && num[i + 4] == 1)
			mtz[0][k] = 2;
		i++;
	}
	fill_down(mtz, num, i);
}
*/
