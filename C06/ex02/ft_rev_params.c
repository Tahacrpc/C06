/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:20:27 by tcirpici          #+#    #+#             */
/*   Updated: 2024/09/01 12:27:00 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const **argv)
{
	int	i;
	int	h;

	i = argc - 1;
	while (i > 0)
	{
		h = 0;
		while (argv[i][h])
		{
			write(1, &argv[i][h], 1);
			h++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
