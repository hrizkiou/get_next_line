/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrizkiou <hrizkiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:47:03 by hrizkiou          #+#    #+#             */
/*   Updated: 2019/06/05 14:06:11 by hrizkiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			main(void)
{
	int		fd;
	char	*str;

	fd = open("large_file.txt", O_RDWR);
	while ((get_next_line(fd, &str)))
	{
		ft_putstr(str);
		ft_strdel(&str);
	}
	ft_strdel(&str);
	return (0);
}
