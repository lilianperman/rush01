/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:40:05 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/06 11:43:51 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	case_logic(int *num, int i)

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
	return (0);
}
