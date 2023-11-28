/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:24:40 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:07:17 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub.h"

void	free_map(void)
{
	int	i;

	i = 0;
	while (g_game.data.map[i] != NULL)
	{
		free(g_game.data.map[i]);
		i++;
	}
	free(g_game.data.map);
	g_game.data.map = NULL;
}

void	free_vars(void)
{
	if (g_game.data.map)
		free_map();
	if (g_game.textures.no)
		free(g_game.textures.no);
	if (g_game.textures.so)
		free(g_game.textures.so);
	if (g_game.textures.we)
		free(g_game.textures.we);
	if (g_game.textures.ea)
		free(g_game.textures.ea);
	if (g_game.mlx.win)
		mlx_destroy_window(g_game.mlx.mlx, g_game.mlx.win);
	if (g_game.mlx.img)
		mlx_destroy_image(g_game.mlx.mlx, g_game.mlx.img);
}
