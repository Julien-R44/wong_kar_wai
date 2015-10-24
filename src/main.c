/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:59:45 by jripoute          #+#    #+#             */
/*   Updated: 2015/03/01 23:36:39 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		main(void)
{
	t_all	all;

	init_game(&all);
	if (check_win_value(WIN_VALUE) == 1 && start_menu(&all))
	{
		while (77)
		{
			displays_all(&all);
			if (key_hook(&all) == -1)
				break ;
			check_game_play(&all);
			clear();
			refresh();
		}
		endwin();
	}
	else
		exit_normal(&all);
	return (0);
}
