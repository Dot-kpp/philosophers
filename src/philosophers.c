/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:53:53 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/20 13:01:47 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"

t_data *get_data(void)
{
	static t_data *data = NULL;

	if (data == NULL)
		data = (t_data *)malloc(sizeof(t_data));
	return(data);
}

// void init_data(int argc, char **argv)
// {

// }

// int convert_values(int argc, char **argv)
// {
	
// }

int ft_is_digit(int num)
{
	if((num <= '9') && (num >= '0'))
		return(1);
	else
		return(0);
}

int is_valid_num(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			if (!ft_is_digit(argv[i][j]))
			{
				invalid_input();
			}
			j++;
		}
		i++;
	}
	return(0);
}

int parse_for_init(int argc, char **argv)
{
	if (argc == 5)
	{
		if (is_valid_num(argv))
			// init_data(argc, argv);
			return(0);
	}
	if (argc == 6)
	{
		if (is_valid_num(argv))
			return(0);
			// init_data(argc, argv);
	}
	return (0);
}


int main(int argc, char **argv)
{
	if (argc < 5 || argc > 6)
		invalid_input();
	parse_for_init(argc, argv);

	return (0);
}