/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 16:30:17 by juligonz          #+#    #+#             */
/*   Updated: 2020/06/02 15:24:46 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btsp.h"

t_map	g_map;

int		main(void)
{
	g_map = create_map(10);
	game_loop();
	destroy_map(g_map);
	return (0);
}