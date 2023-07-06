/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:46:26 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/06 11:51:58 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
int		ft_isspace(char c);
int		case_logic(int *num, int i);
int		valid_oposite(int *num);
void	ft_putnbr(int num);
void	ft_putchar(char c);
//void	fill_mtz(int **mtz, int *num);

#endif
