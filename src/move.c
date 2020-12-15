/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmer <spalmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:36:41 by spalmer           #+#    #+#             */
/*   Updated: 2020/11/05 17:52:27 by spalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	check_move3(t_man *man, SDL_Event *event, char **ar)
{
	if (event->key.keysym.sym == SDLK_a)
	{
		if (ar[(int)(man->y + sin(man->pov - M_PI / 2) * 0.3)][(int)(man->x +
			cos(man->pov - M_PI / 2) * 0.3)] != '1' &&
			ar[(int)(man->y + sin(man->pov - M_PI / 2) * 0.3)][(int)(man->x +
			cos(man->pov - M_PI / 2) * 0.3)] != 'P' &&
			ar[(int)(man->y + sin(man->pov - M_PI / 2) * 0.3)][(int)(man->x +
			cos(man->pov - M_PI / 2) * 0.3)] != 'G')
		{
			man->x += (cos(man->pov - M_PI / 2) * 0.1);
			man->y += (sin(man->pov - M_PI / 2) * 0.1);
		}
	}
}

void	check_move2(t_man *man, SDL_Event *event, char **ar)
{
	if (event->key.keysym.sym == SDLK_d)
	{
		if (ar[(int)(man->y + sin(man->pov + M_PI / 2) * 0.3)][(int)(man->x +
			cos(man->pov + M_PI / 2) * 0.3)] != '1' &&
			ar[(int)(man->y + sin(man->pov + M_PI / 2) * 0.3)][(int)(man->x +
			cos(man->pov + M_PI / 2) * 0.3)] != 'P' &&
			ar[(int)(man->y + sin(man->pov + M_PI / 2) * 0.3)][(int)(man->x +
			cos(man->pov + M_PI / 2) * 0.3)] != 'G')
		{
			man->x += (cos(man->pov + M_PI / 2) * 0.1);
			man->y += (sin(man->pov + M_PI / 2) * 0.1);
		}
	}
}

void	check_move4(t_man *man, SDL_Event *event, char **ar)
{
	if (event->key.keysym.sym == SDLK_w)
	{
		if (ar[(int)(man->y + sin(man->pov) * 0.3)][(int)(man->x +
			cos(man->pov) * 0.3)] != '1' &&
			ar[(int)(man->y + sin(man->pov) * 0.3)][(int)(man->x +
			cos(man->pov) * 0.3)] != 'P' &&
			ar[(int)(man->y + sin(man->pov) * 0.3)][(int)(man->x +
			cos(man->pov) * 0.3)] != 'G')
		{
			man->y += (sin(man->pov) * 0.1);
			man->x += (cos(man->pov) * 0.1);
		}
	}
}

void	check_move(t_man *man, SDL_Event *event, char **ar)
{
	if (event->key.keysym.sym == SDLK_s)
	{
		if (ar[(int)(man->y - sin(man->pov) * 0.3)][(int)(man->x -
			cos(man->pov) * 0.3)] != '1' &&
			ar[(int)(man->y - sin(man->pov) * 0.3)][(int)(man->x -
			cos(man->pov) * 0.3)] != 'P' &&
			ar[(int)(man->y - sin(man->pov) * 0.3)][(int)(man->x -
			cos(man->pov) * 0.3)] != 'G')
		{
			man->y -= (sin(man->pov) * 0.1);
			man->x -= (cos(man->pov) * 0.1);
		}
	}
}

void	check_rotate(t_man *man, SDL_Event *event)
{
	if (event->key.keysym.sym == SDLK_LEFT)
	{
		man->pov -= 0.05;
		if (man->pov <= 0)
			man->pov += (2 * M_PI);
	}
	if (event->key.keysym.sym == SDLK_RIGHT)
	{
		man->pov += 0.05;
		if (man->pov >= 2 * M_PI)
			man->pov -= (2 * M_PI);
	}
}
