/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:54:02 by jpilotte          #+#    #+#             */
/*   Updated: 2022/12/13 19:54:02 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"


void invalid_input(void)
{
	printf("\nError: Invalid input.\nPlease use the following format:");
	printf("./philosopher 2 2 2 2 (a firth argument is optional)\n\n");
	exit(0);
}

void value_error(void)
{
	printf("\nError: Arguments need to be positive intergers\n");
	exit(0);
}