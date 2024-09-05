/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:52:26 by tcirpici          #+#    #+#             */
/*   Updated: 2024/09/01 12:26:55 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	h;

	i = 1;
	while (i < argc)
	{
		while (argv[i][h])
		{
			write(1, &argv[i][h], 1);
			h++;
		}
		write(1, "\n", 1);
		i++;
		h = 0;
	}
	return (0);
}
