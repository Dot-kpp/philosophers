/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:53:53 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 19:53:53 by jpilotte         ###   ########.fr       */
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
ft_is_digit(int num)
{
	if((c >= 9))
}

int is_valid_num(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while()
		printf("%s", argv[i]);
		i++;
	}
	return(0);
}

int parse_for_init(int argc, char **argv)
{
	if (argc == 5)
	{
		if (is_valid_num(argc, argv))
			// init_data(argc, argv);
			return(0);
	}
	if (argc == 6)
	{
		if (is_valid_num(argc, argv))
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