/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_isdigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caide-so <caide-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:06:39 by caide-so          #+#    #+#             */
/*   Updated: 2024/10/08 17:14:52 by caide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../src/ft_isdigit.c"

MU_TEST(ft_isdigit_receiving_A_returns_false)
{
	// ARRANGE
	char	input = 'A';
	int	expected_result = 0;

	// ACT
	int	actual_result = ft_isdigit(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(ft_isdigit_receiving_0_returns_true)
{
	// ARRANGE
	char	input = '0';
	int	expected_result = 1;

	// ACT
	int	actual_result = ft_isdigit(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(ft_isdigit_receiving_asterisk_returns_false)
{
	// ARRANGE
	char	input = '*';
	int	expected_result = 0;

	// ACT
	int	actual_result = ft_isdigit(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isdigit_test_suite)
{
	MU_RUN_TEST(ft_isdigit_receiving_A_returns_false);
	MU_RUN_TEST(ft_isdigit_receiving_0_returns_true);
	MU_RUN_TEST(ft_isdigit_receiving_asterisk_returns_false);
}
