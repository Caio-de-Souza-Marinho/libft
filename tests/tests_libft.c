/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_libft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:01:32 by caide-so          #+#    #+#             */
/*   Updated: 2024/10/07 19:03:46 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "minunit.h"

#include "libft.h"

#include "tests_ft_isalpha.c"

int	main(void)
{
	MU_RUN_SUITE(ft_isalpha_test_suite);

	MU_REPORT();
	return MU_EXIT_CODE;
}
