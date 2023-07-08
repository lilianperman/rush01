/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:46:26 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/07 10:22:39 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_mtz
{
	int	row_up[4];
	int	row_down[4];
	int	col_left[4];
	int	col_right[4];
}	t_mtz;

int		ft_atoi(const char *str);
int		ft_isspace(char c);
int		case_logic(int *num, int i);
int		valid_oposite(int *num);
void	ft_putnbr(int num);
void	ft_putchar(char c);
void	set_struct(int **matriz, int *num);
void	padding(int **mtz, t_mtz *sides);
void	padding_vertical(int **mtz, t_mtz *sides);
void	padding_sides(int **mtz, t_mtz *sides);
void	padding_loop(int **mtz);

#endif
