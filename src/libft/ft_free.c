/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoser <mmoser@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:12:37 by mmoser            #+#    #+#             */
/*   Updated: 2024/04/24 12:13:40 by mmoser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_2d_array(void **arr)
{
	size_t	y;

	y = 0;
	if (!arr)
	{
		return ;
	}
	if (!arr[0])
	{
		free(arr);
		return ;
	}
	while (arr[y])
	{
		free(arr[y]);
		y++;
	}
	free(arr);
}