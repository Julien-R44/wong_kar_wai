/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_win_val.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 23:32:52 by jripoute          #+#    #+#             */
/*   Updated: 2015/03/01 23:36:55 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		check_win_value(int value)
{
	while ((value % 2 == 0) && value > 1)
		value /= 2;
	if (value == 1)
		return (1);
	else
	{
		ft_putstr_fd("Bad Win Value : ", 2);
		ft_putendl_fd(ft_itoa(WIN_VALUE), 2);
		return (-1);
	}
	return (1);
}
