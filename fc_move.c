/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fc_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschafer <aschafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 15:59:44 by aschafer          #+#    #+#             */
/*   Updated: 2016/04/14 16:11:21 by aschafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfc.h"

void	fc_move(int direction, int nb, int fd)
{
	static char *cap[2] = {"nd", "le"};

	while (nb > 0)
	{
		fc_write_cap(cap[direction], 1, fd);
		nb--;
	}
}
