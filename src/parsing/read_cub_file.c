/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_cub_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:35:49 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/08 17:59:25 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/parser.h"

void	read_cub_file(t_map *map, char *file_name)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		exit_with_error(CUB_OPENING_ERROR);
	i = 0;
	line = "";
	while (line)
	{
		line = get_next_line(fd);
		map->cub[i] = line;
		i++;
	}
}
