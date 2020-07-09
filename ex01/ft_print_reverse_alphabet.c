/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtshuku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:14:51 by thtshuku          #+#    #+#             */
/*   Updated: 2020/07/09 12:08:52 by thtshuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
	{
	write (1, &c, 1);
	}	

void ft_print_reverse_alphabet(void)
{	
	
	int l;
	l='z';

	while (l >= 'a')
	{
		ft_putchar(l);
		l--;
	}
}
